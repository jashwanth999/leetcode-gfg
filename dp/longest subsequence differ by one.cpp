#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	/*
	    "same like longest increasing subsequenece"
	     just find which element is differ by absolute 1 


	*/
	int N=7;
	int A[]={10, 9, 4, 5, 4, 8, 6};
	int dp[N];
	dp[0]=0;
	for (int i = 1; i < N; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (abs(A[i]-A[j])==1) 
						dp[i] = max(dp[i], dp[j] + 1);
		}
	}
 cout<< *max_element(dp, dp + N);

	return 0;
}