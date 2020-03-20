#include<iostream>
using namespace std;

insertItem(int a[], int n, int k, int item)
{
    int j;
    j=n;

    while(j>=k)
    {
        a[j+1] = a[j];
        j--;
    }
    a[k] = item;
    n=n+1;
}

int main()
{
    int a[100], n, k, item;
    int i,j;

    cout<<"input number of element of the array and the position of the array to operation:\n";
    cin>>n>>k;
    cout<<"input the item to insert\n";
    cin>>item;

    cout<<"enter the array\n";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    insertItem(a, n, k, item);
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\n";
    }

    return 0;
}
