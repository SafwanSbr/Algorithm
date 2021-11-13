//problem link - https://www.codechef.com/problems/JAM11

#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 100005

vector <long long int> dp ( MAX, -1);

long long int fun( long long int n )
{
    if( n == 0 ) return 1;
    if( n < 0 )  return 0;
    
    if( dp[n] != -1 ) return dp[n];
    return dp[n] = ( fun(n-1) + fun(n-2) + fun(n-3) ) % MOD;
}

signed main()
{
    int t; cin >> t;
    while( t-- )
    {
        long long int n;
        cin >> n;
        cout << fun( n ) << "\n";
    }
}
