/*#include<iostream>
#include<queue>
#define sz 100000
#define pb push_back
#define inf (20)
using namespace std;

int cost[sz];

vector<int> adj[sz], weight[sz];

priority_queue< pair<int,int>, vector <pair<int,int>  >, greater< pair<int,int> > >q; /// node, cost

int dijkstra(int source, int destination)
{
    q.push({0,source});
    cost[source] = 0;
    int x, y;
    while(!q.empty())
    {
        y = q.top().first;
        x = q.top().second;
        q.pop();
        for (int i = 0; i<adj[x].size(); i++)
            if(y + weight[x][i] < cost[ adj[x][i] ])
            {
                cost[ adj[x][i] ] = cost[x] + weight[x][i];
                q.push({ cost[ adj[x][i] ] ,adj[x][i]});
            }
    }
    return cost[destination];
}

void dijkstra_init(int n)
{
    for (int i = 0; i<n; i++)
        cost[i] = inf;
}

int main()
{
    int n, m, x, y, c;
    cin >> n >> m;
    for (int i = 0; i<m; i++)
    {
        cin >> x >> y >> c;
        adj[x].pb(y);
        adj[y].pb(x);
        weight[x].pb(c);
        weight[y].pb(c);
    }
    dijkstra_init(n);
    cin >> x >> y;

    c = dijkstra(x,y);

    cout << "Minimum cost for going " << x << " to " << y << " is " << c <<"\n";

    return 0;
}*/
/**
6 9
0 4 100
0 1 25
0 5 7
1 4 2
1 5 7
2 1 2
2 5 8
2 3 1
3 5 3
0 4
*/

// STRING VECTOR EXAMPLE
// CPP program to illustrate
// Implementation of begin() function
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	// declaration of vector container
	vector<string> myvector{ "This", "is",
							"Geeksforgeeks" };

	// using begin() to print vector
	for (auto it = myvector.begin();
		it != myvector.end(); ++it)
		cout << ' ' << *it;
	return 0;
}
*/

// INTEGER VECTOR EXAMPLE
// CPP program to illustrate
// Implementation of end() function
/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// declaration of vector container
	vector<int> myvector{ 1, 2, 3, 4, 5 };

	// using end() to print vector
	for (auto it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;
	return 0;
}
*/
// CPP program to illustrate
// the vector::rbegin() function
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	v.insert(v.begin(), 14);
	v.push_back(15);

	// prints all the elements
	cout << "The vector elements in reverse order are:\n";
	for (auto it = v.rbegin(); it != v.rend(); it++)
		cout << *it << " ";
	return 0;
}
*/

// CPP program to illustrate
// use of cbegin()
//#include <iostream>
//#include <string>
//#include <vector>
/*#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<string> vec;

	// 5 string are inserted
	vec.push_back("first");
	vec.push_back("second");
	vec.push_back("third");
	vec.push_back("fourth");
	vec.push_back("fifth");

	// displaying the contents
	cout << "Contents of the vector:" << endl;
	for (auto itr = vec.begin();
		itr != vec.end();
		++itr)
		cout << *itr << endl;

	return 0;
}
*/

// CPP programto illustrate
// functioning of cend()
/*#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> vec;

	// 5 string are inserted
	vec.push_back("first");
	vec.push_back("second");
	vec.push_back("third");
	vec.push_back("fourth");
	vec.push_back("fifth");
	vec.insert(vec.begin(), "Arif");

	// displaying the contents
	cout << "Contents of the vector:" << endl;
	for (auto itr = vec.cend() - 1;
		itr >= vec.begin();
		--itr)
		cout << *itr << endl;

	return 0;
}
*/

// CPP program to illustrate
// Application of empty() function
/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int sum = 0;
	vector<int> myvector{ 1, 5, 6, 3, 9, 2, 3, 96, 45, 'h' };
	cout<<myvector.back()<<endl;    ///it will print the value of 'h'
	cout<<myvector[2]<<endl;
	cout<<"size :"<<myvector.size()<<endl;
	while (!myvector.empty()) {
		sum = sum + myvector.back();
		myvector.push_back(1);
		cout << sum<<endl;
	}

	return 0;
}
*/

// CPP program to illustrate
// Implementation of swap() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// vector container declaration
	vector<int> myvector1{ 1, 2, 3, 4 };
	vector<int> myvector2{ 3, 5, 7, 9 };

	// using swap() function to swap elements of vector
	swap(myvector1, myvector2);

	// printing the first vector
	cout << "myvector1 = ";
	for (auto it = myvector1.begin(); it < myvector1.end(); ++it)
		cout << *it << " ";

	// printing the second vector
	cout << endl
		<< "myvector2 = ";
	for (auto it = myvector2.begin(); it < myvector2.end(); ++it)
		cout << *it << " ";
	return 0;
}



