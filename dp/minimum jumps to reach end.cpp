#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	/*
	  minimum jumps to reach end
	  1 jumps on 3 jumps on 9 jumps on last index value

	  3 steps

	*/
	int N = 11 ;
	int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	int dp[N];
	dp[0] = 0;
	for (int i = 1; i < N; i++)
	{
		dp[i] = INT_MAX;
		for (int j = 0; j < i; j++)
		{
        if(dp[j]!= INT_MAX and i<=j+arr[j])
        {
        	  dp[i]=min(dp[i],dp[j]+1);
        }
		}
	}
	cout<<dp[N-1];
	return 0;
}