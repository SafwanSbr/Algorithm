#include<iostream>
#include<vector>
#include<math.h>
#define ll long long
using namespace std;
/*
  Sieve can't be used in big range (like 10^7 to 10^12).
  So at first we will use Sieve for 1 to sqrt(r) range.
  Then use it to find primes in the range the question asked.
*/
vector <long long int> prime;

void Sieve(long long int r){// Sieve for 1 to sqrt(r) range.
    long long int sqrt_r = sqrt(r);
    vector <bool> checkPrime(sqrt_r , true);
    
    checkPrime[0] = checkPrime[1] = false;
    for( int i=2 ; i*i<=sqrt_r ; i++){ // if we crop 1 to root(n), we will find all prime by n
        if( checkPrime[i] ){
            for(int j=i*i ; j<=sqrt_r; j += i){
                checkPrime[j] = false;
            }
        }
    }
    for( int i=0; i<=sqrt_r; i++){
        if( checkPrime[i] ) prime.push_back( i );
    }
}

void sigmentedSieve(long long int l, long long int r)
{
    /*
      We will declear array of the range.
    */
   Sieve(r);
   vector <bool> ansPrime( r-l+1, true); // (r-l+1) is the total number of range 

   for ( int i=0; prime[i]*prime[i] <= r ; i++){

       long long int cropNumber = (l/prime[i]) * prime[i]; //for prime[i]=2, cropNumber= (20/2)*2 =20
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
