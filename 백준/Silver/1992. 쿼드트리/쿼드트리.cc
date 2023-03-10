#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>

using namespace std;

bool in[70][70];
void solve(int x, int y ,int size)
{
	bool isAllOne = true;
	bool isAllZero = true;
	bool flag = false;
	for (int i = x; i < size + x; i++)
	{
		for (int j = y; j < size + y; j++)
		{
			if (in[i][j] == 0)
				isAllOne = false;
			if (in[i][j] == 1)
				isAllZero = false;
			if (!isAllZero && !isAllOne)
			{
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	if (isAllZero)
	{
		cout << 0;
	}
	else if (isAllOne)
	{
		cout << 1;
	}
	else
	{
		cout << "(";
		solve(x, y, size / 2);
		solve(x, y + size / 2, size / 2);
		solve(x + size / 2, y, size / 2);
		solve(x + size / 2, y + size / 2, size / 2);
		cout << ")";
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
		string str;
		cin >> str;
		for (int j = 1; j <= N; j++)
		{
			in[i][j] = str[j - 1] - '0';
		}
	}
	solve(1, 1, N);
	cout << "\n";
	return 0;	
}
