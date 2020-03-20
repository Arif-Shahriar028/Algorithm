#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int beg, int end)
{
    int low = beg;
    int high = end;
    bool right = true;
    while(low<high)
    {
        if(a[low]>a[high])
        {
            swap(a[low], a[high]);
            right^=1;
        }
        if(right)
            high--;
        else
            low++;
    }
    return low;
}

void quicksort(int a[], int beg, int end)
{
    if(beg>=end)
        return;
    int i = partition(a, beg, end);
    quicksort(a, beg, i-1);
    quicksort(a, i+1, end);
}

int main()
{
    int n, i, j, m;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    quicksort(a, 0, n-1);
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    return 0;
}


/*#include<iostream>
#define sz 100000
using namespace std;

int partition(int arr[], int beg, int end)
{
    int low = beg, high = end;
    bool right = true;
    while(low<high)
    {
        if(arr[low] > arr[high])
        {
            swap(arr[low], arr[high]);
            right^=1;
        }
        if(right) high--;
        else low++;
    }
    return low;
}

void quicksort(int arr[], int beg, int end)
{
    if(beg>=end) return;
    int i = partition(arr,beg,end);
    quicksort(arr, beg, i-1);
    quicksort(arr, i+1, end);
}

int main()
{
    int arr[sz], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quicksort(arr,0,n-1);

    cout << "Sorted Array:\n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n"[i==n-1];

    return 0;
}
*/
