/*
      -----Fibonachi Number-----
   0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ......
The recursive method is,
                 n           (1+1)=2  3 **ans=2   
               /   \                /   \
             n-1    n-2    (1+0)=1 2      1
            /  \    /  \          / \
          n-2 n-3  n-3 n-4       1   0
  **Untill n-r=0;             
  **Time O(2^n) [WHICH IS HUGE]
*/
#include<iostream>
using namespace std;

int fib( int n)
{
    if( n<=1 ) return n;
    else return fib(n-1) + fib(n-2);
}

int main()
{
    cout << fib(9) <<"\n";
}
