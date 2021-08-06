#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	/*
    n=3 -> no of fences

    k=2 -> no of colors (rb)

    at most 2 colors adjacent  should color the fences

   r r b  
   b b r
   r b r
   b r b
   b r r
   r b b 
  total six ways
  
   
  */
	int n = 3;
	int k = 2;
	int dp[n + 1];
	dp[0] = 0;
	dp[1] = k;
	dp[2] = k * k;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = ((k - 1) * (dp[i - 1] + dp[i - 2]));
	}
cout<< dp[n];
	return 0;
}