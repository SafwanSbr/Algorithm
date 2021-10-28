#include<iostream>
using namespace std;

int firstPos( int arr[], int Size, int elem)
{
    static int indx = 0;
    if( Size==0 ) return -1;
    if( arr[0] == elem) return indx;
    indx++;
    return firstPos( arr+1, Size-1, elem);
}

int main()
{
    int arr[] = {1, 4, 6, 8, 10, 20};
    int Size = sizeof(arr)/sizeof(arr[0]);
    int n;

    n = 9;
    int ans = firstPos( arr, Size, n);
    if( ans != -1) cout<< ans << '\n';
    else cout<< "Element Not Found!\n";
}