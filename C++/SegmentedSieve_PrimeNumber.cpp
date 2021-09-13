#include<iostream>
#include<vector>
#define MAX 32000
#define ll long long

using namespace std;

vector <int> prime;

void Sieve(){
    vector <bool> checkPrime(MAX , true);
    
    checkPrime[0] = checkPrime[1] = false;
    for( int i=2 ; i*i<=MAX ; i++){ // if we crop 1 to root(n), we will find all prime by n
        if( checkPrime[i] ){
            for(int j=i*i ; j<=MAX; j += i){
                checkPrime[j] = false;
            }
        }
    }
    for( int i=0; i<=MAX; i++){
        if( checkPrime[i] ) prime.push_back( i );
    }
}

void sigmentedSieve(long long int l, long long int r)
{
    /*
      We will declear array of the range.
    */
   Sieve();
   vector <bool> ansPrime( r-l+1, true);

   for ( int i=0; prime[i]*prime[i] <= r ; i++){

       long long int cropNumber = (l/prime[i]) * prime[i];
       if( cropNumber < l ) cropNumber += prime[i];
       //cout<< cropNumber << " ";
       for( long long int j = cropNumber ; j <= r; j += prime[i] ){
           ansPrime[ j-l ] = false; // j-l == index of the number
       }
       if ( cropNumber == prime[i]) ansPrime[ cropNumber - l ] = true;
   }
   for (int i=0; i < r-l+1 ; i++){
       if( ansPrime[i] ) cout<< (l+i) <<" ";
   }
}

int main()
{
    sigmentedSieve(10, 30);
    cout << "\n";
}
