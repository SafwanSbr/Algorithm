#include<iostream>
#include<vector>

using namespace std;
#define N 40
/*
  The Sieve of Eratosthenes Algorithm
  Its used to find prime number
  Time Complexity O(N* log( log( N )))
*/
vector <bool> prime( N+1, true );// At first all are prime.

void Sive(){
    prime[0] = prime[1] = false; // 0 & 1 are not prime.

    for(int i=2; i*i<=N ; i++){
        if( prime[i] == true){
            for( int j = i*i; j<=N; j += i){ // start to crop from i^2
                prime[j] = false;
            }
        }
    }
}

int main()
{
    Sive();

    for( int i=1; i<=N ; i++){
        if(prime[i]) cout<< i << " ";
    }
    cout<<"\n";
}
