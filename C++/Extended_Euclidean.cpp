/*
  Here, we will find int solution of (x,y) from "ax + by = c"
  where c=gcd(a,b) or c%gcd(a,b)=0
    As gcd(a,b) = gcd(b,a%b)
    (a % gcd(a,b) == 0); So (ax % gce(a,b) == 0);
    Same
    (by % gcd(a,b) == 0);

*/
#include<iostream>
using namespace std;

int gcd( int a, int b, int &x, int &y)
{
  int i = 1;
  if( b == 0){
    x = 1;
    y = 0;
    return a;
  }
  int x1, y1;
  int ans_gcd = gcd( b, a%b, x1, y1);
  x = x1;
  y = x1 - y1*(a/b);
  //To understand steps, print below
  cout << "----------------------------\n";
  cout << "Case :" << i << "\n";
  cout << "(a,b) : "<< a <<", " << b <<"\n";
  cout << "x = " << x1 << " = " << x <<"\n";
  cout << "y = " << x1 << " - " << y1 <<"*(" << a << "/" << b << ") = " << y << "\n";
  cout << "GCD = " << ans_gcd << "\n";
  i++;
  cout << "------------------------------\n";

  return ans_gcd;
}

int main()
{
  int a, b, x, y;
  cin >> a >> b ;
  int t = gcd( a, b, x, y);
  cout << t << "\n";
}

//Source: https://cp-algorithms.com/algebra/extended-euclid-algorithm.html
//SBR
