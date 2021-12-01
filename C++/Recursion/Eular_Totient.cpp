#include<iostream>

using namespace std;

int phi( int n )
{
    int result = n;
    for( int i=2; i*i<=n; i++){
        if( n%i == 0){
            while( n%i == 0){
                n /= i;
                result -= result/i;
                cout<< "n = " << n << "\nresult = " <<result<<" i = " << i <<"\n";
            }
        }
    }
    if( n > 1 ){
        result -= result/n;
    }
    return result;
}

int main()
{
    cout << phi( 600 ) <<"\n";
}