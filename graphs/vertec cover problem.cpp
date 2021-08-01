#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

	int V, n;
	cin >> V >> n;
	vector<int>adj[n];
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<int>vis(V, 0);
	queue<int>q;
	q.push(0);

	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (auto v : adj[u])
		{
			if (!vis[u] and !vis[v])
			{

				vis[v] = true;
				q.push(v);
			}
		}
	}
	int c=0;
	for(int i=0;i<V;i++)
	{
		if(vis[i]) c++;

	}
	cout<<c<<endl;


	return 0;
}