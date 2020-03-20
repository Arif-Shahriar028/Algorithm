#include<bits/stdc++.h>
using namespace std;

void TOH(int n, int A, int B, int C)
{
    if(n>0)
    {
        TOH(n-1, A, C, B);
        cout<<"Move a disc from "<<A<<" to "<<C<<endl;
        TOH(n-1, B, A, C);
    }
}

int main()
{
    int n, A=1, B= 2, C= 3, x;
    cin>>n;
     TOH(n, A, B, C);
    return 0;
}
