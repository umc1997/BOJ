#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
bool in[130][130];
int white = 0;
int blue = 0;
void solve(int x, int y ,int size)
{
	bool isAllWhite = true;
	bool isAllBlue = true;
	bool flag = false;
	for (int i = x; i < size + x; i++)
	{
		for (int j = y; j < size + y; j++)
		{
			if (in[i][j] == 0)
				isAllBlue = false;
			if (in[i][j] == 1)
				isAllWhite = false;
			if (!isAllBlue && !isAllWhite)
			{
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	if (isAllBlue)
		blue++;
	else if (isAllWhite)
		white++;
	else
	{
		solve(x, y, size / 2);
		solve(x + size/2, y, size / 2);
		solve(x, y + size / 2, size / 2);
		solve(x + size/2, y + size/2, size / 2);
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
	cout << white << "\n" << blue << "\n";
	return 0;	
}
