#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	/*
       x1<x2>x3<4 longest alternating subsequence
	*/
	vector<int>nums={1,5,3};
	int l = 1;
	int r = 1;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] > nums[i - 1]) l = r + 1;
		else if (nums[i] < nums[i - 1]) r = l + 1;

	}
	cout<< max(l, r);

	return 0;
}