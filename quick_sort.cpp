#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot= a[low];
    int i = low, j= high;
    while (i<j)
    {
        do
        {
            i++;
        }while(a[i]<=pivot);
        do
        {
            j--;
        }while(a[j]>pivot);
        if(i<j)
            swap(a[i], a[j]);
    }
    swap(a[low], a[j]);
    return j;
}

void quick_sort(int a[], int low, int high)
{
    if(low<high)
    {
        int j = partition(a, low, high);
        quick_sort(a, low, j-1);
        quick_sort(a, j+1, high);
    }
}

int main()
{
    int n, i, j;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    quick_sort(a, 0, n-1);

    cout<<"sorted array :\n";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    return 0;
}
