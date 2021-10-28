#include<bits/stdc++.h>
using namespace std;

int Pow( int a, int n)
{
    if( n == 1) return a;
    return a*Pow(a,n-1);
}

int main()
{
    cout << Pow(2, 3) << "\n";
}
