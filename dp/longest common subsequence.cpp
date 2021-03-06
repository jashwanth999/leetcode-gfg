#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	/*
      abcde
      abcfe 
      longest common subsequence is abce(4)

	*/
	string s1="abcde";
	string s2="abcfe";
	int x=s1.length();
	int y=s2.length();
	int dp[x + 1][y + 1];
	for (int i = 0; i <= x; i++)
	{
		for (int j = 0; j <= y; j++)
		{
			if (i == 0 or j == 0) dp[i][j] = 0;
			else if (s1[i - 1] == s2[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout<< dp[x][y]<<endl;

	return 0;
}