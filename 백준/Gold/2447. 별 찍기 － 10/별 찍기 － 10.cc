#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
char a[2200][2200];
void star(int n, int x, int y)
{
	unsigned int unit = n / 3;
	if (unit == 1)
	{
		a[x][y] = '*';
		a[x][y + 1] = '*';
		a[x][y + 2] = '*';
		a[x + 1][y] = '*';
		a[x + 1][y + 1] = ' ';
		a[x + 1][y + 2] = '*';
		a[x + 2][y] = '*';
		a[x + 2][y + 1] = '*';
		a[x + 2][y + 2] = '*';
	}
	else
	{
		star(unit, x, y);
		star(unit, x, y + unit);
		star(unit, x, y + 2 * unit);
		star(unit, x + unit, y);
		//space
		star(unit, x + unit, y + 2 * unit);
		star(unit, x + unit * 2, y);
		star(unit, x + unit * 2, y + unit);
		star(unit, x + unit * 2, y + 2 * unit);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	unsigned int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			a[i][j] = ' ';
		}
	}
	star(N, 0, 0);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << a[i][j];
		}
		cout << "\n";
	}
	return 0;
}
