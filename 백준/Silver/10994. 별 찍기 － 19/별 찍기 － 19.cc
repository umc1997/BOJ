#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
char map[500][500];
void star(int x, int y, int size)
{
	if (size == 1)
	{
		map[x][y] = '*';
	}
	else 
	{
		int length = 4 * (size - 1) + 1;
		for (int i = x; i <= x + length - 1; i++)
		{
			for (int j = y; j <= y + length - 1; j++)
			{
				if (i == x || i == x + length - 1)
					map[i][j] = '*';
				else
				{
					if (j == y || j == y + length - 1)
						map[i][j] = '*';
				}
			}
		}
		star(x + 2, y + 2, size - 1);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	int length = (N - 1) * 4 + 1;
	
	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			map[i][j] = ' ';
		}
	}
	
	star(1, 1, N);

	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			cout << map[i][j];
		}
		cout << "\n";
	}

	return 0;
}

