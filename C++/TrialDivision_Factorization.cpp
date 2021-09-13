#include<iostream>
#include<vector>
using namespace std;

vector< int > trialDivisor(int n)
{
    vector < int> divisors;
    for( int i = 2; i*i <= n; i++ ){
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
    int n = 54321;
    vector <int> v = trialDivisor(n);
    for ( int i=0; i<v.size(); i++) cout<< v[i] << " ";
    cout<< "\n";
}
