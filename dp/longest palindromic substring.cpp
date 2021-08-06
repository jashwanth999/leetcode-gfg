#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	string s = "babcd";
	int start = 0;
	int end = 1;
	for (int i = 1; i < s.length(); i++)
	{
		int l = i - 1;
		int r = i;
		// for even palindromic string
		while (l >= 0 and r < s.length() and s[l] == s[r])
		{
			if (end < (r - l + 1))
			{
				start = l;
				end = r - l + 1;
			}
			l--;
			r++;
		}
		l = i - 1;
		r = i + 1;
		// for add palindromic string
		while (l >= 0 and r < s.length() and s[l] == s[r])
		{
			if (end < (r - l + 1))
			{
				start = l;
				end = r - l + 1;
			}
			l--;
			r++;
		}
	}
	cout<<s.substr(start,end);

	return 0;
}