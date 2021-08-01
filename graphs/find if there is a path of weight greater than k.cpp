#include<bits/stdc++.h>
using namespace std;
bool dfs(int src, int k, vector<int>&vis, vector<pair<int, int>>adj[])
{
	if (k <= 0) return true;
	vis[src] = 1;
	for (auto x : adj[src])
	{
		int a = x.first;
		int b = x.second;
		if (vis[a]) continue;
		if (b >= k) return true;
		if (dfs(a, k - b, vis, adj)) return true;

	}
	vis[src] = 0;
	return false;

}
int main()
{

	int n, v;
	cin >> n >> v;
	vector<pair<int, int>>adj[n];
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		adj[a].push_back({b, c});
		adj[b].push_back({a, c});
	}
	vector<int>vis(v, 0);
	int k = 60;
	if (dfs(0, k, vis, adj)) cout << 1;
	else cout << 0;

	return 0;
}