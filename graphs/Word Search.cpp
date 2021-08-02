#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void dfs(vector<string>& board, string word, int i, int j, int k, int &check)
{
	if (i<0 or j<0 or i >= board.size() or j >= board[0].size()  or  k >= word.size()) return;
	if (board[i][j] != word[k]) return;
	if (k == word.size() - 1)  check = true;
	board[i][j] = '*';
	dfs(board, word, i + 1, j, k + 1, check);
	dfs(board, word, i - 1, j, k + 1, check);
	dfs(board, word, i, j + 1, k + 1, check);
	dfs(board, word, i, j - 1, k + 1, check);
	dfs(board, word, i + 1, j + 1, k + 1, check);
	dfs(board, word, i - 1, j - 1, k + 1, check);
	dfs(board, word, i - 1, j + 1, k + 1, check);
	dfs(board, word, i + 1, j - 1, k + 1, check);
	board[i][j] = word[k];
}
int main()
{

	vector<string> board = {"BBABBM",
	                        "CBMBBA",
	                        "IBABBG",
	                        "GOZBBI",
	                        "ABBBBC",
	                        "MCIGAM"
	                       };
	string word = "MAGIC";
	int isTrue = false;
	vector<vector<int>>ans;
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			if (board[i][j] == word[0])
			{
				int check = false;
				dfs(board, word, i, j, 0, check);
				if (check) ans.push_back({i, j});
				
			}
		}
	}
	cout<<ans.size()<<endl;
	if(ans.size())
		cout<<"Found word in given matrix"<<endl;
	else cout<<"Cannot find word in given matrix"<<endl;
	for (auto x : ans) {
		cout << x[0] << ' ' << x[1] << endl;

	}

	return 0;
}
