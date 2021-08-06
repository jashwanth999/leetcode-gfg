#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int check = 0;
void dfs(int src, int par, vector<vector<int>>&graph, vector<int>&vis, int color)
{
	vis[src] = color;
	for (auto x : graph[src])
	{
		if (vis[x] == -1)
		{
			dfs(x, src, graph, vis, 3 - color);
		}
		else if (x != par and color == vis[x])
		{
			check = 1;
		}

	}
}

int main()
{
	vector<vector<int>>graph =  {{1,3},{0,2}};
	vector<int>vis(graph.size(), -1);
	for (int i = 0; i < graph.size(); i++)
	{
		if (vis[i] == -1)
		{
			dfs(i, -1, graph, vis, 1);
		  if(check) break;
		}
	}
	if(check) cout<<"no bipartite";
	else cout<<"is bipartite";


return 0;
}