#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, q, i, j, count {0}, l, r, k, m;
    cin>>n>>q;
    set<ll> x;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0 ; i<q; i++)
    {

        cin>>l>>r;
        k  = r-l+1;
        x.clear();
        //long long int b[k];

        //count =1;
        for(j=l-1; j<r; j++)
        {
            x.insert(a[j]);
        }
        m= x.size();
       // sort(b, b+k);

        /*for(j=1; j<k; j++)
        {
            if(b[j] != b[j-1])
                count ++;
        }*/

        cout<<m<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,cnt=0;
    cin>>n>>q;
    long long int a[n],c[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<q;i++)
    {
        int p,m;
        cin>>p>>m;
        int y=m-p+1;
        int cnt=1;
        int x=0;
    for(int j=0;i<m ;j++)
    {
        c[y]=a[j];
        x++;
    }

    sort(c,c+y);
    for(int i=p-1;i<m;i++)
    {
        if(a[i]!=a[i-1])
            cnt++;
    }
    cout<<cnt<<endl;
    }
return 0;
}
