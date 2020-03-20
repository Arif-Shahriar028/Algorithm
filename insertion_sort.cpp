#include<iostream>
#define inf (1<<9)
#define sz 100000
using namespace std;

void insertionsort(int arr[], int n)
{
    arr[0] = -inf;
    for (int i = 1; i<=n; i++)
    {
        for (int j = i; j>0; j--)
            if(arr[j-1]>arr[j]) swap(arr[j-1],arr[j]);
            else break;
    }
}

int main()
{
    int n, arr[sz];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    insertionsort(arr,n);

    cout << "Sorted Array:\n";

    for (int i = 1; i <= n; i++)
        cout << arr[i] << " \n"[i==n];
    return 0;
}

/**
13
35 19 42 55 94 5 220 6 9 -85 85 66 1
*/
