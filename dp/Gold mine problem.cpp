#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	/*
	   just add from the last column with max of right rightup and  right down

	*/

	int gold[][4] = { {1, 3, 1, 5},
		{2, 2, 4, 1},
		{5, 0, 2, 3},
		{0, 6, 1, 2}
	};
	int n = 4;
	int ans = 0;

	for (int j = n - 1; j >= 0; j--)
	{
		for (int i = 0; i < n; i++)
		{
			int right = (j == n - 1 ? 0 : gold[i][j + 1]);
			int rightUp = (j == n - 1 or i == 0 ? 0 : gold[i - 1][j + 1]);
			int rightDown = (j == n - 1 or i == n - 1 ? 0 : gold[i + 1][j + 1]);
			gold[i][j] += max({right, rightDown, rightUp});


		}
	}

	for(int i=0;i<n;i++)
	{
     ans=max(ans,gold[i][0]);
	}
	cout<<ans<<endl;
	return 0;
}