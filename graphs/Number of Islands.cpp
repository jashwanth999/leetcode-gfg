#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void dfs(vector<vector<char>>&grid, int i, int j)
{
	if (i<0 or j<0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == '0' or grid[i][j] == 'V') return;
	grid[i][j] = 'V';
	dfs(grid, i + 1, j);
	dfs(grid, i - 1, j);
	dfs(grid, i, j - 1);
	dfs(grid, i, j + 1);

}
int main()
{
	vector<vector<char>>grid =
	{	
	{'0', '1', '1', '1', '0', '0', '0'},
	 {'0', '0', '1', '1', '0', '1', '0'}
	};
	int numberOfIslands = 0;
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[0].size(); j++)
		{
			if (grid[i][j] == '1')
			{
				numberOfIslands++;
				dfs(grid, i, j);
			}
		}
	}
	cout << numberOfIslands << endl;



	return 0;
}