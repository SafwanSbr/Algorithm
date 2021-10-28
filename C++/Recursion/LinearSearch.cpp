#include<iostream>
using namespace std;

bool linSearch( int arr[], int Size, int element)
{
    if( Size == 0) return false;
    if( arr[0] == element) return true;

    return linSearch( arr+1, Size-1, element);
}

int main()
{
    int arr[] = {1, 4, 6, 8, 10, 20};
    int Size = sizeof(arr)/sizeof(arr[0]);
    int n;

    n = 8;
    if( linSearch( arr, Size, n)) cout<< n << " is Present!\n";
    else cout<< n << " is Absent!\n";

    n=5;
    if( linSearch( arr, Size, n)) cout<< n << " is Present!\n";
    else cout<< n << " is Absent!\n";
}