#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

	/*
	  1c0 1c1
	  1    1 
	  2c0 2c1 2c2
	  1   2    1
	  3c0 3c1 3c2 3c3
	  1    3   3   1
	  4c0 4c1 4c2 4c3 4c4
	  1   4   6    4    1

	*/
  int n=4;
  int r=2;
	int dp[r + 1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = min(r, i); j > 0; j--)
		{
			dp[j] = (dp[j] + dp[j - 1]);
		}
	}

	cout<< dp[r];
	return 0;
}