# include<bits/stdc++.h>
using namespace std;

int Sum( int arr[], int Size ){
    if( Size == 0) return 0;
    return arr[0] += Sum( arr+1, Size-1);
}

int main()
{
    int arr[] = { 1, 4, 6, 4 };
    int Size = sizeof(arr)/sizeof(arr[0]);

    cout<< Sum(arr, Size) << "\n";
}