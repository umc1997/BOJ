#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
char map[1030][2060];
void star(int x, int y, int size)
{
	if (size == 1)
	{
		map[x][y] = '*';
	}
	else if (size % 2 == 0)
	{
		//inverse
		int height = pow(2, size) - 1;
		int width = pow(2, size + 1) - 3;
		int startX = x + height / 2;
		int startY = y;
		for (int i = 0; i < height; i++)
		{
			if (i == height - 1)
			{
				for (int j = startY - i; j <= startY + i; j++)
					map[startX][j] = '*';
			}
			map[startX][startY + i] = '*';
			map[startX][startY - i] = '*';
			startX--;
		}

		star((x + startX) / 2 + 1, y, size - 1);
	}
	else
	{
		int height = pow(2, size) - 1;
		int width = pow(2, size + 1) - 3;
		int startX = x - height / 2;
		int startY = y;
		for (int i = 0; i < height; i++)
		{
			if (i == height - 1)
			{
				for (int j = startY - i; j <= startY + i; j++)
					map[startX][j] = '*';
			}
			map[startX][startY + i] = '*';
			map[startX][startY - i] = '*';
			startX++;
		}
		star((x + startX) / 2 - 1, y, size - 1);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	int height = pow(2, N) - 1;
	int width = pow(2, N + 1) - 3;
	int startX;
	int startY = width / 2 + 1;
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			map[i][j] = ' ';
		}
	}
	
	star(height / 2 + 1, width / 2 + 1, N);

	for (int i = 1; i <= height; i++)
	{
		if (i != 1)
			cout << "\n";
		for (int j = 1; j <= width; j++)
		{
			if (N % 2 == 0)
			{
				if (i + j > width + 1)
					break;
				
			}
			else
			{
				if (j >= (width + 1) / 2 + i)
					break;
			}
			cout << map[i][j];
		}
	}
	cout << "\n";
	return 0;
}

