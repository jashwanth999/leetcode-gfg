#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

	/*
	  1. if 0.. n  divide by arr[i] it means we can  arr[i] coins 
	  2. if 0..n less than arr[i] just take previous row val
	  3. else just go to the val where we get j-arr[i]+previous row

	*/
	int m=3;
	int n=4; // total sum of coins need to be 
	int S[]={1,2,3};
	int dp[m][n+1];
    for(int i =0;i<m;i++) dp[i][0]=1;
	for(int i=0;i<=n;i++)
	{
	    if(i%S[0]==0) dp[0][i]=1;
	    else dp[0][i]=0;
	}
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<S[i]) dp[i][j]=dp[i-1][j];
			else 
			{
				int k=j-S[i];
			    dp[i][j]=dp[i-1][j]+dp[i][k];
			}
		}

	}
	cout<< dp[m-1][n];
	

	return 0;
}