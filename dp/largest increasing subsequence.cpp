#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	/*
	  5 8 3 7 9 1
	  longest increasing subsequence is 5 8 9 or 5 7 9
	*/
	int n = 6;
	int arr[] = {5, 8, 3, 7, 9, 1};
	int lis[n];
	lis[0] = 1;
	for (int i = 0; i < n; i++)
	{
		lis[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j] and lis[i] < lis[j] + 1)
			{
				lis[i] = lis[j] + 1;
			}
		}
	}

	cout << *max_element(lis, lis + n);


	return 0;
}