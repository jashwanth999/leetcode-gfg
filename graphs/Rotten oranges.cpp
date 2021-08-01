#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	vector<vector<int>>grid = {{0, 1, 2}, {0, 1, 2}, {2, 1, 1}};
	queue<pair<int, int>>q;
	int fresh = 0;
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[0].size(); j++)
		{
			if (grid[i][j] == 1) fresh++;
			else if (grid[i][j] == 2) q.push({i, j});
		}
	}
	int timeTaken = 0;
	vector<pair<int, int>>dir = {{0, 1}, {1, 0}, { -1, 0}, {0, -1}};
	while (!q.empty() and fresh != 0 )
	{
		int n = q.size();
		for (int j = 0; j < n; j++)
		{
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			for (int i = 0; i < dir.size(); i++)
			{
				int newX = dir[i].first + x;
				int newY = dir[i].second + y;
				if (newX<0 or newY<0 or newX >= grid.size() or newY >= grid[0].size() or grid[newX][newY] != 1) continue;
				grid[newX][newY] = 2;
				fresh--;
				q.push({newX, newY});
			}
		}
		timeTaken++;

	}
	cout << (fresh == 0 ? timeTaken :-1) << endl;

	return 0;
}