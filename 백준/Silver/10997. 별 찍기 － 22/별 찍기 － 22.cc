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
		int width = (size - 1) * 4 + 1;
		int height;
		if (size == 1)
			height = 1;
		else
			height = (size - 1) * 4 + 3;
		for (int i = x; i <= x + height - 1; i++)
		{
			for (int j = y; j <= y + width - 1; j++)
			{
				if (i == x || i == x + height - 1)
					map[i][j] = '*';
				else
				{
					if (j == y || (j == y + width - 1) && (i != x + 1))
						map[i][j] = '*';
				}
			}
		}
		map[x + 2][y + width - 2] = '*';
		if (size == 2)
		{
			map[x + 3][y + 2] = '*';
			map[x + 4][y + 2] = '*';
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
	int width = (N - 1) * 4 + 1;
	int height;
	if (N == 1)
		height = 1;
	else
		height = (N - 1) * 4 + 3;
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			map[i][j] = ' ';
		}
	}
	
	star(1, 1, N);

	for (int i = 1; i <= height; i++)
	{
		if (i == 2)
		{
			cout << map[i][1];
			cout << "\n";
			continue;
		}
		for (int j = 1; j <= width; j++)
		{
			cout << map[i][j];
		}
		cout << "\n";
	}

	return 0;
}

