#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	/*
	    longest common substring

	*/
	string S1 = "abcdef";
	string S2="ejabck";
	int n=S1.length();
	int m=S2.length();
	int dp[n + 1][m + 1];
	int maxi = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (i == 0 or j == 0) dp[i][j] = 0;
			else if (S1[i - 1] == S2[j - 1])
			{
				dp[i][j] = 1 + dp[i - 1][j - 1];
				maxi = max(dp[i][j], maxi);
			}
			else dp[i][j] = 0;
		}
	}
	cout<< maxi;

	return 0;
}