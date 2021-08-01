#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
/*  
             0

         100     200

       1              2
             100
      min cost is with k stops is 200

*/

	vector<vector<int>>flights = {{0, 1, 100}, {1, 2, 100}, {0, 2, 500}};
	int n = flights.size();
	int src = 0;
	int dst = 2;
	int k = 1;
	vector<vector<vector<int>>> adjList(n);
	for (auto f : flights) {
		int from = f[0];
		int to = f[1];
		int cost = f[2];
		adjList[from].push_back({to, cost});
	}
	queue<vector<int>> q;
	q.push({src, 0, -1});
	int minCost = INT_MAX;
	while (!q.empty()) {
		vector<int> curStation = q.front(); q.pop();

		int curCity = curStation[0];
		int curCost = curStation[1];
		int curK = curStation[2];

		if (curCity == dst) {
			minCost = min(minCost, curCost);
			continue;
		}
		for (auto p : adjList[curCity]) {

			if (curK + 1 <= k and curCost + p[1] < minCost)
				q.push({p[0], p[1] + curCost, curK + 1});
		}
	}

	cout << (minCost == INT_MAX ? -1 : minCost);



	return 0;
}