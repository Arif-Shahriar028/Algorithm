#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n; i++)
    {
        for(j = i; j>0; j--)
        {
            if(a[j-1]>a[j])
                swap(a[j], a[j-1]);
        }
    }

    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    return 0;
}
