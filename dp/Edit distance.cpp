#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

	/*
	  geek 
	  gesek

	  minimum operations required to change string s to t

         g e  s  e  k
       0 1 2  3  4  5 ->  
	  g  1   
	  e  2
	  e  3
	  k  4

	  1. if s[i]==t[i] then just take previous diagonal value
	  2. else minimum of prev row prev col and prev diagonal +1

	*/
	string s="geek";
	string t="gesek";
	int n = s.length();
	int m = t.length();
	int dp[n + 1][m + 1];

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (i == 0) dp[i][j] = j;
			else if (j == 0) dp[i][j] = i;
			else if (s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1];
			else dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
		}
	}
	cout<< dp[n][m];
	return 0;
}