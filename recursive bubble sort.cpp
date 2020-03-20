#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    if(n==1)
        return ;

    for(i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
            swap(arr[i], arr[i+1]);
    }

    bubbleSort(arr, n-1);
}

void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10, 5, 20, 15, 31, 13, 65, 15};
    int i, j, n;
    n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}
