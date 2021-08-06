#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

/*
   1.  if j(0..W) >= weights[i] then simply take max of previous row and  previous row j-wt[i] val
   2.  else it means j(0..W) less than given so just take previous row val 
*/

	int N = 3;
	int W = 4;
	int values[] = {1, 2, 3};
	int weight[] = {4, 5, 1};
	int dp[N+1][W+1];
	for(int i=0;i<=N;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(i==0 or j==0) dp[i][j]=0;
			else if(weight[i-1]<=j) 
			{
				  dp[i][j]=max(values[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);

			}
			else dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[N][W];




	return 0;
}