#include<bits/stdc++.h>
using namespace std;
vector<int>V;
void bfs(int src, vector<int>&vis, vector<int>adj[])
{
	queue<int>q;
	q.push(src);
	while (!q.empty())
	{
		int t = q.front();
		if (!vis[t])
		{
			V.push_back(t);
			vis[t] = 1;
		}
		q.pop();
		for (auto x : adj[t])
			if (!vis[x]) q.push(x);
	}

}
void dfs(int src, vector<int>&vis, vector<int>adj[])
{
	vis[src] = 1;
	V.push_back(src);
	for (auto x : adj[src])
		if (!vis[x]) dfs(x, vis, adj);

}
int main()
{

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
	bfs(2, vis, adj);
	for (auto x : V) cout << x << endl;



	return 0;
}