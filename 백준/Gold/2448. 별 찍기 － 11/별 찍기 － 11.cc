#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
char map[3072][6144];
void star(int x, int y, int size)
{
	if (size == 3)
	{
		map[y][x] = '*';

		map[y + 1][x - 1] = '*';
		map[y + 1][x + 1] = '*';

		map[y + 2][x - 2] = '*';
		map[y + 2][x - 1] = '*';
		map[y + 2][x]	  = '*';
		map[y + 2][x + 1] = '*';
		map[y + 2][x + 2] = '*';
	}
	else
	{
		star(x, y, size / 2);
		star(x - size / 2, y + size / 2, size / 2);
		star(x - size / 2 + size, y + size / 2, size / 2);
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
		for (int j = 0; j < N * 2 - 1; j++)
		{
			map[i][j] = ' ';
		}
	}
	star(N - 1, 0, N);
	for (int i = 0; i < N ; i++)
	{
		for (int j = 0; j < N * 2 - 1; j++)
		{
			cout << map[i][j];
		}
		cout << "\n";
	}
	return 0;
}

