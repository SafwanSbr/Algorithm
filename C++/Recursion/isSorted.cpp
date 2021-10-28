#include<iostream>
using namespace std;

void isSorted( int arr[], int Size )
{
    if( Size == 1 ) {
        cout<< "Sorted\n";
        return;
    }
    if( arr[0]>arr[1] ){
        cout<< "Not Sorted\n";
        return;
    }
    return isSorted( arr+1, Size-1 );
}

int main()
{
    int arr[]={1, 2, 4, 3, 5, 6};
    int Size = sizeof(arr)/sizeof(arr[0]);
    isSorted(arr, Size);
}