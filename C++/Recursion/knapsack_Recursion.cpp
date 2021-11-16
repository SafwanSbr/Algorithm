//Problem - https://atcoder.jp/contests/dp/tasks/dp_d

#include<bits/stdc++.h>
using namespace std;
#define opetimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);// Last part used to print all at the end
#define int long long int

int knapsack( int wt[], int val[], int n, int W)
{
    if( W == 0 || n == 0 ) return 0;
    if( wt[n-1] <= W ){
        return max( val[n-1]+ knapsack( wt, val, n-1, W-wt[n-1]), knapsack( wt, val, n-1, W));
    }
    else return knapsack( wt, val, n-1, W);
}

signed main()
{
    opetimize();

    int n, W;
    cin >> n >> W;
    int wt[n], val[n];
    for( int i=0; i<n; i++){
        cin >> wt[i];
        cin >> val[i];
    }

    cout << knapsack( wt, val, n, W) << "\n";
}
