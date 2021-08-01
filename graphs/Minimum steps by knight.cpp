#include<bits/stdc++.h>
using namespace std;
#define ll long long int
queue<pair<int, int>>q;
void bfs(vector<vector<int>>&arr, int n)
{
	while (!q.empty())
	{
		int i = q.front().first;
		int j = q.front().second;
		q.pop();
		if (i + 1 >= 0 and i + 1 < n  and j + 2 >= 0 and j + 2 < n and arr[i + 1][j + 2] == 0)
		{
			arr[i + 1][j + 2] = arr[i][j] + 1;
			q.push({i + 1, j + 2});
		}
		if (i - 1 >= 0 and i - 1 < n  and j + 2 >= 0 and j + 2 < n and arr[i - 1][j + 2] == 0)
		{
			arr[i - 1][j + 2] = arr[i][j] + 1;
			q.push({i - 1, j + 2});
		}
		if (i + 1 >= 0 and i + 1 < n  and j - 2 >= 0 and j - 2 < n and arr[i + 1][j - 2] == 0)
		{
			arr[i + 1][j - 2] = arr[i][j] + 1;
			q.push({i + 1, j - 2});
		}
		if (i - 1 >= 0 and i - 1 < n  and j - 2 >= 0 and j - 2 < n and arr[i - 1][j - 2] == 0)
		{
			arr[i - 1][j - 2] = arr[i][j] + 1;
			q.push({i - 1, j - 2});
		}
		if (i + 2 >= 0 and i + 2 < n  and j - 1 >= 0 and j - 1 < n and arr[i + 2][j - 1] == 0)
		{
			arr[i + 2][j - 1] = arr[i][j] + 1;
			q.push({i + 2, j - 1});
		}
		if (i - 2 >= 0 and i - 2 < n  and j - 1 >= 0 and j - 1 < n and arr[i - 2][j - 1] == 0)
		{
			arr[i - 2][j - 1] = arr[i][j] + 1;
			q.push({i - 2, j - 1});
		}
		if (i + 2 >= 0 and i + 2 < n  and j + 1 >= 0 and j + 1 < n and arr[i + 2][j + 1] == 0)
		{
			arr[i + 2][j + 1] = arr[i][j] + 1;
			q.push({i + 2, j + 1});
		}
		if (i - 2 >= 0 and i - 2 < n  and j + 1 >= 0 and j + 1 < n and arr[i - 2][j + 1] == 0)
		{
			arr[i - 2][j + 1] = arr[i][j] + 1;
			q.push({i - 2, j + 1});
		}
	}

}

int main()
{
	vector<int>KnightPos = {4, 5};
	vector<int>TargetPos = {1, 1};
	int N = 6;
	int x1 = KnightPos[0];
	int y1 = KnightPos[1];
	int x2 = TargetPos[0];
	int y2 = TargetPos[1];
	vector<vector<int>>arr(N, vector<int>(N, 0));
	q.push({x1 - 1, y1 - 1});
	bfs(arr, N);
	cout<<arr[x2 - 1][y2 - 1];

	return 0;
}