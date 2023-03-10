#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int sudoku[9][9];
vector<pair<int, int>> toFill;
bool isPromise(int x ,int y ,int num)
{
	int boxIdxX = x / 3;
	int boxIdxY = y / 3;
	for (int i = 0; i < 9; i++)
	{
		if (sudoku[x][i] == num && i != y)
			return false;
		if (sudoku[i][y] == num && i != x)
			return false;
	}
	for (int i = boxIdxX * 3; i < boxIdxX * 3 + 3; i++)
	{
		for (int j = boxIdxY * 3; j < boxIdxY * 3 + 3; j++)
		{
			if (sudoku[i][j] == num)
				return false;
		}
	}
	return true;
}
bool solve(int s, int cnt)
{
	if (cnt == s)
	{
		return true;
	}
	for (int i = 1; i <= 9; i++)
	{
		if (isPromise(toFill[cnt].first, toFill[cnt].second, i))
		{
			sudoku[toFill[cnt].first][toFill[cnt].second] = i;
			bool terminate = solve(s, cnt + 1);
			if (terminate)
				return true;
			else
				sudoku[toFill[cnt].first][toFill[cnt].second] = 0;
		}
	}
	return false;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> sudoku[i][j];
			if (sudoku[i][j] == 0)
				toFill.push_back(pair<int, int>(i, j));
		}
	}

	solve(toFill.size(), 0);

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << sudoku[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
