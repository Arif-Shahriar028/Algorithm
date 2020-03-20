#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n, i, j, temp;
    int arr[100];

    cin>>n;
    for(i=0; i<n ; i++)
     {
         cin>>arr[i];
     }

     for(i=1; i<n-1; i++)
     {
         j=1; ///according to algorithm of book
         while(j<= (n-i))
         {
             if(arr[j-1]>arr[j])
             {
                 temp = arr[j-1];
                 arr[j-1] = arr[j];
                 arr[j]= temp;
             }
             j++;
         }
     }

     for(i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }
}
