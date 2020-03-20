#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, m;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n-1; i++)
    {
        m = i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[m])
            {
                m = j;
                if(i!=m)
                swap(a[m], a[i]);
            }
        }
    }

    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    return 0;
}


