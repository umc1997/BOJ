#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int in[2200][2200];
int minusOne = 0;
int one = 0;
int zero = 0;
void solve(int x, int y ,int size)
{
	bool isAllMinus = true;
	bool isAllOne = true;
	bool isAllZero = true;
	bool flag = false;
	for (int i = x; i < size + x; i++)
	{
		for (int j = y; j < size + y; j++)
		{
			if (in[i][j] == -1)
			{
				isAllOne = false;
				isAllZero = false;
			}
			else if (in[i][j] == 0)
			{
				isAllMinus = false;
				isAllOne = false;
			}
			else if (in[i][j] == 1)
			{
				isAllMinus = false;
				isAllZero = false;
			}
			if (!isAllZero && !isAllOne && !isAllMinus)
			{
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	if (isAllZero)
		zero++;
	else if (isAllOne)
		one++;
	else if (isAllMinus)
		minusOne++;
	else
	{
		size /= 3;
		solve(x, y, size);
		solve(x, y + size, size);
		solve(x, y + size * 2, size);
		solve(x + size, y, size);
		solve(x + size, y + size, size);
		solve(x + size, y + size * 2, size);
		solve(x + size * 2, y, size);
		solve(x + size * 2, y + size, size);
		solve(x + size * 2, y + size * 2, size);

	}
	return;
}
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> in[i][j];
		}
	}
	solve(1, 1, N);
	cout << minusOne << "\n" << zero << "\n" << one << "\n";
	return 0;	
}
