#include<bits/stdc++.h>
using namespace std;

int arr[20][20];  /// it is globally declared for all function

void display(int v)
{
    int i, j;
    for(i=0; i<v; i++)
    {
        for(j=0; j<v; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}

void add(int u, int v)
{
    arr[u][v] = 1;
    arr[v][u] = 1;
}

int main()
{
    int v = 5;
    add(0, 1);
    add(0, 4);
    add(1, 2);
    add(2, 3);
    add(1, 3);
    add(3, 4);
    add(1, 4);
    display(v);

}

/// resource : https://www.tutorialspoint.com/cplusplus-program-to-implement-adjacency-matrix

