// O( n log( log n ))
#include<iostream>
#include <vector>
using namespace std;

vector<int>Prime;

/*
  We are going to use Sieve of Eratosthenes (Used for prime number)
*/

void Sieve(int n){
    for(int i=0; i<=n ; i++){
        if( i%2 == 0) Prime.push_back(2);
        else Prime.push_back(i);
    }
    for(int i=3; i*i<=n ; i++){
        if( Prime[i] == i){
            for(int j = i*i ; j<=n ; j +=i ){
                Prime[j] = i;
            }
        }
    }
}
void primeFactor(int n){
    Sieve(n);
    while(n != 1){
        cout<< Prime[n] << " ";
        n = n/Prime[n];
    }
    cout<< "\n";
}
int main(){
    int n=15;
    cout<< "Prime factors of " << n <<" is : ";
    primeFactor(n);
}
/* LOGIC:
   ex: n = 16;
     16/2 --> 2 [ prime[16] == 2 ]
      8/2 --> 2 [ prime[8] == 2 ]
      4/2 --> 2 [ prime[4] == 2 ]
      2/2 --> 2 [ prime[2] == 2 ]
       1
    n = 15;
     15/3 --> 3 [ prime[15] == 3 ]
      5/5 --> 5 [ prime[5] == 5 ]
       1
*/
