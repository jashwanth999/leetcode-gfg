#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int oldColor;
void dfs(vector<vector<int>>& image, int i, int j, int newColor)
{
	if (i<0 or j >= image[0].size() or i >= image.size() or image[i][j] != oldColor or           image[i][j] == newColor) return;
	image[i][j] = newColor;
	dfs(image, i - 1, j, newColor);
	dfs(image, i + 1, j, newColor);
	dfs(image, i, j - 1, newColor);
	dfs(image, i, j + 1, newColor);
}
int main()
{
	vector<vector<int>>image =
	{	{1, 0, 0, 0},
		{1, 1, 0, 1},
		{1, 1, 0, 0},
		{0, 1, 1, 1}
	};
	int sr = 1;
	int sc = 1;
	oldColor = image[sr][sc];
	int newColor = 2;
	dfs(image, sr, sc, newColor);
	for (auto x : image)
	{
		for (auto y : x)
		{
			cout << y << ' ';
		}
		cout << endl;
	}


	return 0;
}