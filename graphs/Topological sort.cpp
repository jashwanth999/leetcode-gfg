#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int V, n;
	cin >> V >> n;
	vector<int>adj[n];
	int inDegree[V] = {0};
	int outDegree[V] = {0};
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
		inDegree[b]++;
	}
	vector<int>sorted;
	queue<int>q;
	for (int i = 0; i < V; i++)
	{
		if (inDegree[i] == 0) q.push(i);
	}
	while (!q.empty())
	{
		int src = q.front();
		q.pop();
		sorted.push_back(src);
		for (auto x : adj[src])
		{
			inDegree[x]--;
			if (inDegree[x] == 0)
			{
				q.push(x);
			}
		}

	}
	for(auto x:sorted) cout<<x<<' ';


	return 0;
}