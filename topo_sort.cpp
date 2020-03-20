#include<bits/stdc++.h>
#define sz 100
using namespace std;

vector<int> T;
//int n;
bool adj[sz][sz];

void topo_sort(int n)
{
    int t[n], in_degree[n] = {0}, k =0, i, j;
    bool vis[n];
    queue<int> q;

    for(int i =0; i<n; i++)
    {
        for(int j =0 ; j<n; j++)
        {
            if(adj[i][j])
            in_degree[j] = in_degree[j]+1;
        }
    }
    for(i=0; i<n; i++)
    {
        if(in_degree[i]==0)
        {
            q.push(i);
            vis[i] = true;
        }
    }

    while(!q.empty())
    {
        int vertex = q.front();
        q.pop();
        T.push_back(vertex);
        for(j=0; j<n; j++)
        {
            if(adj[vertex][j]==true && vis[j] == false)
            {
                in_degree[j] = in_degree[j] -1;
                if(in_degree[j]==0)
                {
                    q.push(j);
                    vis[j] = true;
                }
            }
        }
    }

}

int main()
{
    int e, n, i, j, x, y;
    cin>>n>>e;
    for(i=0; i<e; i++)
    {
        cin>>x>>y;
        adj[x][y] = true;
    }
    topo_sort(n);
    for(i=0; i<n; i++)
        cout<<T[i]<<" ";

    return 0;
}

/*
6 10
0 1
0 3
1 2
1 3
2 3
2 5
2 4
3 4
3 5
4 5
*/
