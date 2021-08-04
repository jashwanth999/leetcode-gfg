#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>order;
void dfs(int u, vector<int>adj[], vector<int>&vis)
{
	vis[u] = 1;
	for (auto v : adj[u])
	{
		if (!vis[v]) dfs(v, adj, vis);
	}
	order.push_back(u);
}
void revdfs(int u, vector<int>transpose[], vector<int>&vis1)
{
	vis1[u] = 1;
	for (auto v : transpose[u])
	{
		if (!vis1[v]) revdfs(v, transpose, vis1);
	}

}

int main() {
	int n, V;
	cin >> n >> V;
	vector<int>adj[n];
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<int>vis(V, 0);
	vector<int>vis1(V, 0);
	vector<int>transpose[V];
	for (int i = 0; i < V; i++)
	{
		for (auto x : adj[i])
		{
			transpose[x].push_back(i);
		}
	}
	for (int i = 0; i < V; i++)
	{
		if (!vis[i]) dfs(i, adj, vis);
	}
	int c = 0;
	for (int i = V - 1; i >= 0; i--)
	{
		if (!vis1[order[i]])
		{
			revdfs(order[i], transpose, vis1);
			c++;
		}
	}
	cout<<c<<endl;



}