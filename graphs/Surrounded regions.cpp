#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void dfs(vector<vector<char>>&board, int i, int j)
{
	if (i >= board.size() or j >= board[0].size() or i < 0 or j < 0 or board[i][j] != '-') return;
	board[i][j] = 'O';
	dfs(board, i - 1, j);
	dfs(board, i, j - 1);
	dfs(board, i + 1, j);
	dfs(board, i, j + 1);


}

int main()
{

   // surrounded regions 
	vector<vector<char>>board = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			if (board[i][j] == 'O')
			{

				board[i][j] = '-';
			}
		}
	}
	for (int i = 0; i < board[0].size(); i++) // top
		if (board[0][i] == '-')
			dfs(board, 0, i);

	for (int i = 0; i < board[0].size(); i++) // bottom
		if (board[board.size() - 1][i] == '-')
			dfs(board, board.size() - 1, i);


	for (int i = 0; i < board.size(); i++) // left
		if (board[i][0] == '-')
			dfs(board, i, 0);

	for (int i = 0; i < board.size(); i++) // right
		if (board[i][board[0].size() - 1] == '-')
			dfs(board, i, board[0].size() - 1);

	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			if (board[i][j] == '-')
			{

				board[i][j] = 'X';
			}
		}
	}
	for(auto x:board)
	{
		for(auto y:x)
			cout<<y<<' ';
		cout<<endl;
	}




	return 0;
}