#include<bits/stdc++.h>
using namespace std;

int TOH(int n, int A, int B, int C)
{
    int count {0};
    if(n>0)
    {
        count = TOH(n-1, A, C, B);
        cout<<"Move a disc from "<<A<<" to "<<C<<endl;
        count++;
        count += TOH(n-1, B, A, C);
    }
    return count;
}

int main()
{
    int n, A=1, B= 2, C= 3, x;
    cin>>n;
    x= TOH(n, A, B, C);
    cout<<x;
    return 0;
}
