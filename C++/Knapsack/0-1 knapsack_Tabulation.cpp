//Problem - https://atcoder.jp/contests/dp/tasks/dp_d
#include<bits/stdc++.h>
using namespace std;
//#define opetimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);// Last part used to print all at the end
#define int long long int

vector < vector<int> > dp( 101, vector<int> ( 100001, -1));

int knapsack_t(int wt[], int val[], int n, int W)
{
    for(int i=0; i<=n; i++) {
        for( int j = 0; j<=W; j++){
            if( i == 0 || j == 0) dp[i][j] = 0;
            else if( wt[i-1] <= W){
                dp[i][j] = max( val[i-1]+dp[i][ j-wt[i] ], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}

signed main()
{
    //opetimize();

    int n, W;
    cin >> n >> W;
    int wt[n], val[n];
    for( int i=0; i<n; i++){
        cin >> wt[i];
        cin >> val[i];
    }

    cout << knapsack_t( wt, val, n, W) << "\n";
}
