/*#include<bits/stdc++.h>
using namespace std;
#define sz 100

bool vis[sz];
vector<int> adz[sz];
int level[sz], r[sz];

int bfs(int start)
{
    queue<int> q;
    int i, j =1;
    q.push(start);
    r[0] = start;
    vis[start] = true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0; i<adz[u].size(); i++)
        {
            if(vis[adz[u][i]] == false)
            {
                vis[adz[u][i]] = true;
                level[adz[u][i]] = level[u] +1;
                r[j++] = adz[u][i];
                q.push(adz[u][i]);
            }
        }
    }
}

int main()
{
    int v, e, x, y, i, start;
    cin>>v>>e;
    for(i=0; i<e; i++)
    {
        cin>>x>>y;
        adz[x].push_back(y);
        adz[y].push_back(x);
    }

    cin>>start;
    bfs(start);

    for(i=0; i<v; i++)
        cout<<r[i]<<" level"<<level[i]<<endl;

    return 0;
}


// C program to demonstrate getdate() method

*/

#include<bits/stdc++.h>
#define sz 100009
using namespace std;

bool vis[sz];
int level[sz];
vector<int> adz[sz];

int bfs(int u)
{
	int m =0;
	queue<int> q;
	q.push(u);
	vis[u] = true;
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		for(int i =0; i<adz[x].size(); i++)
		{
			if(vis[adz[x][i]]==false)
			{
				vis[adz[x][i]]=true;
				level[adz[x][i]] = level[x]+1;
				if(level[adz[x][i]]>m)
					m = level[adz[x][i]];
				q.push(adz[x][i]);
			}
		}
	}
	return m;
}

int main()
{
	int t, n, i, j, x, y, f;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0; i<n; i++)
		{
			cin>>x>>y;
			if(i==0)
                f = x;
			adz[x].push_back(y);
			adz[y].push_back(x);
		}

		int m = bfs(f);
		cout<<m<<endl;


	}
}
