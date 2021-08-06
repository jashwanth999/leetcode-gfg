#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>allPaths;
int target = 3;
void dfs(int src, vector<int>&vis, vector<int>adj[], vector<int>V)
{
	vis[src] = 1;
	V.push_back(src);
	if (src == target)
	{
		allPaths.push_back(V);
	}
	for (auto x : adj[src])
		if (!vis[x]) dfs(x, vis, adj, V);
	vis[src] = 0;
}
int main()
{
	// 0->1 1->2 0->2  2->3;
	int n, v;
	cin >> n >> v;
	vector<int>adj[n];
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<int>vis(v, 0);
	vector<int>V;
	dfs(0, vis, adj, V);
	for (auto x : allPaths)
	{
		for (auto y : x)
		{
			cout << y << ' ';
		}
		cout << endl;
	}

	return 0;
}