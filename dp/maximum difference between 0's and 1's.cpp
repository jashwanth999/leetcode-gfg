#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	/*
	   kadane's algorithm

	   0 -> 1
	   1-> -1

	   just keep on adding if x=='0' add +1 else add -1 if sum<0 set sum to 0
	   
	*/
	string S="11000010001";
	int maxi = INT_MIN;
	int max_so_far = 0;
	for (auto x : S)
	{
		int a = (x == '0' ? 1 : -1);
		max_so_far += a;
		if (max_so_far > maxi) maxi = max_so_far;
		if (max_so_far < 0) max_so_far = 0;
	}
	#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	/*
	   kadane's algorithm

	   0 -> 1
	   1-> -1

	   just keep on adding if x=='0' add +1 else add -1 if sum<0 set sum to 0

	*/
	string S="11000010001";
	int maxi = INT_MIN;
	int max_so_far = 0;
	for (auto x : S)
	{
		int a = (x == '0' ? 1 : -1);
		max_so_far += a;
		if (max_so_far > maxi) maxi = max_so_far;
		if (max_so_far < 0) max_so_far = 0;
	}
	cout<< maxi;


	return 0;
}


	return 0;
}