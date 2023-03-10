#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <stack>

using namespace std;
long long board[21][21];
int N;
long long maxValue = 0;
void game(int step, long long board[][21]) {
	if (step == 5)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				maxValue = (maxValue > board[i][j]) ? maxValue : board[i][j];
			}
		}
		return;
	}
	//down
	long long down_board[21][21];
	memset(down_board, 0, sizeof(long long) * 441);
	for (int i = 0; i < N; i++)
	{
		queue<long long> q;
		stack<long long> st;
		for (int j = N - 1; j >= 0; j--)
		{
			if (board[j][i] == 0) continue;
			long long current = board[j][i];
			if (st.empty()) st.push(current);
			else {
				long long t = st.top();
				if (t == current)
				{
					st.pop();
					q.push(t * 2);
				}
				else
				{
					st.pop();
					q.push(t);
					st.push(current);
				}
			}
		}
		stack<long long> tmpStack;
		while (!st.empty())
		{
			tmpStack.push(st.top());
			st.pop();
		}
		while (!tmpStack.empty())
		{
			q.push(tmpStack.top());
			tmpStack.pop();
		}
		for (int j = N - 1; j >= 0; j--)
		{
			if (q.empty()) break;
			down_board[j][i] = q.front();
			q.pop();
		}
	}
	game(step + 1, down_board);
	//up
	long long up_board[21][21];
	memset(up_board, 0, sizeof(long long) * 441);
	for (int i = 0; i < N; i++)
	{
		queue<long long> q;
		stack<long long> st;
		for (int j = 0; j < N; j++)
		{
			if (board[j][i] == 0) continue;
			long long current = board[j][i];
			if (st.empty()) st.push(current);
			else {
				long long t = st.top();
				if (t == current)
				{
					st.pop();
					q.push(t * 2);
				}
				else
				{
					st.pop();
					q.push(t);
					st.push(current);
				}
			}
		}
		stack<long long> tmpStack;
		while (!st.empty())
		{
			tmpStack.push(st.top());
			st.pop();
		}
		while (!tmpStack.empty())
		{
			q.push(tmpStack.top());
			tmpStack.pop();
		}
		for (int j = 0; j < N; j++)
		{
			if (q.empty()) break;
			up_board[j][i] = q.front();
			q.pop();
		}
	}
	game(step + 1, up_board);
	//left
	long long left_board[21][21];
	memset(left_board, 0, sizeof(long long) * 441);
	for (int i = 0; i < N; i++)
	{
		queue<long long> q;
		stack<long long> st;
		for (int j = 0; j < N; j++)
		{
			if (board[i][j] == 0) continue;
			long long current = board[i][j];
			if (st.empty()) st.push(current);
			else {
				long long t = st.top();
				if (t == current)
				{
					st.pop();
					q.push(t * 2);
				}
				else
				{
					st.pop();
					q.push(t);
					st.push(current);
				}
			}			
		}
		stack<long long> tmpStack;
		while (!st.empty())
		{
			tmpStack.push(st.top());
			st.pop();
		}
		while (!tmpStack.empty())
		{
			q.push(tmpStack.top());
			tmpStack.pop();
		}
		for (int j = 0; j < N; j++)
		{
			if (q.empty()) break;
			left_board[i][j] = q.front();
			q.pop();
		}
	}
	game(step + 1, left_board);

	//right
	long long right_board[21][21];
	memset(right_board, 0, sizeof(long long) * 441);
	for (int i = 0; i < N; i++)
	{
		queue<long long> q;
		stack<long long> st;
		for (int j = N - 1; j >= 0; j--)
		{
			if (board[i][j] == 0) continue;
			long long current = board[i][j];
			if (st.empty()) st.push(current);
			else {
				long long t = st.top();
				if (t == current)
				{
					st.pop();
					q.push(t * 2);
				}
				else
				{
					st.pop();
					q.push(t);
					st.push(current);
				}
			}
		}
		stack<long long> tmpStack;
		while (!st.empty())
		{
			tmpStack.push(st.top());
			st.pop();
		}
		while (!tmpStack.empty())
		{
			q.push(tmpStack.top());
			tmpStack.pop();
		}
		for (int j = N - 1; j >= 0; j--)
		{
			if (q.empty()) break;
			right_board[i][j] = q.front();
			q.pop();
		}
	}
	game(step + 1, right_board);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> board[i][j];
	}

	game(0, board);
	cout << maxValue << '\n';

	return 0;

}