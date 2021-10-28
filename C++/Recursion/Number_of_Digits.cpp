#include<iostream>
using namespace std;

int NumDig( int n )
{
    if( n<=0 ) return 0;
    return 1+NumDig(n/10);
}

int main()
{
    cout<< NumDig( 10034 ) << "\n";
}