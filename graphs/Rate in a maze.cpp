#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<string>v;
void dfs(vector<vector<int>>&m, int i, int j, int n, string k, vector<vector<int>>&vis)
{
	if (i<0 or j >= n or i >= n  or vis[i][j] or !m[i][j]) return;
	if (i == n - 1 and j == n - 1)
	{
		v.push_back(k);
		return;
	}
	vis[i][j] = 1;
	dfs(m, i - 1, j, n, k + 'U', vis);
	dfs(m, i + 1, j, n, k + 'D', vis);
	dfs(m, i, j - 1, n, k + 'L', vis);
	dfs(m, i, j + 1, n, k + "R", vis);
	vis[i][j] = 0;

}
int main()
{
	vector<vector<int>>m = {{1, 0, 0, 0},
		{1, 1, 0, 1},
		{1, 1, 0, 0},
		{0, 1, 1, 1}
	};
	vector<vector<int>>vis(4, vector<int>(4, 0));
	dfs(m, 0, 0, 4, "", vis);
	for(auto x:v) cout<<x<<endl;


	return 0;
}