#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// Efficient method using priority queue o(N*logN)
int main()
{

	int V, E;
	cin >> V >> E;
	vector<pair<int, int>>adj[V];
	for (int i = 0; i < E; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}
	vector<int>weights(V, INT_MAX);

	int vis[V] = {0};
	weights[0] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
	pq.push({0, 0});
	while (!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();
		vis[u] = 1;
		for (auto x : adj[u])
		{
			int v = x.first;
			int w = x.second;
			if (!vis[v] and w < weights[v])
			{
				weights[v] = w;
				pq.push({w, v});
			}

		}

	}
	int ans = 0;
	for (int i = 0; i < V; i++) ans += weights[i];
	cout << ans << endl;
	return 0;
}
// 4 4
// 0 1 2
// 0 3 5
// 1 2 3
// 2 3 4