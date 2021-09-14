#include<iostream>
#include<vector>
using namespace std;
/*
  Totally same as Trial Divisior.
  Just, we will run the loop 50% of trial division.
  At first, we will divide n with 2 for all possible time. Then we divide with odd numbers.
*/
vector< int > trialDivisor(int n)
{
    vector < int> divisors;
    while( n%2 == 0){
        divisors.push_back( 2 );
        n = n/2;
    }
    for( int i = 3; i*i <= n; i += 2 ){
        while( n%i == 0){
            divisors.push_back( i );
            n = n/i;
        }
    }
    if( n>1 ){
        divisors.push_back( n );
    }
    return divisors;
}

int main()
{
    int n=54321;
    vector <int> v = trialDivisor(n);
    for( int i=0; i<v.size(); i++) cout<< v[i] << " ";
    cout<<"\n";
}