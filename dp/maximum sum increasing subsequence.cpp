#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	/*
	  5 8 3 7 9 1
	  longest increasing subsequence is 5 8 9 with sum 22
	*/
	int n = 6;
	int arr[] = {5, 8, 3, 7, 9, 1};
	int lis[n];
	lis[0] = arr[0];
	for (int i = 0; i < n; i++)
	{
		lis[i] = arr[i];
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j] and lis[i] < lis[j] + arr[i])
			{
				lis[i] = lis[j] + arr[i];
			}
		}
	}
	cout<< *max_element(lis, lis + n);


	return 0;
}