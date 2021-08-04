
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool directedDfs(vector<int>&order, vector<int>&vis, vector<int>adj[], int src)
{
	vis[src] = 1;
	order[src] = 1;
	for (auto x : adj[src])
	{
		if (!vis[x])
		{
			if (directedDfs(order, vis, adj, x)) return true;
		}
		else if (order[x]) return true;
	}
	order[src] = 0;
	return false;
}
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
		//adj[b].push_back(a);
	}
	vector<int>vis(V, 0);
	vector<int>order(V, 0);
	int isTrue = false;
	for (int i = 0; i < V; i++)
	{
		if (!vis[i] && directedDfs(order, vis, adj, i)) {
			isTrue = true;

		}
	}
	cout<<(isTrue?"It has a cycle":"There is no cycle");

	return 0;
}