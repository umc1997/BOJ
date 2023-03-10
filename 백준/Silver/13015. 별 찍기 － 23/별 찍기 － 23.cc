#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	int width = 4 * N - 3;
	int height = 2 * N - 1;

	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			if (i == 1 || i == height)
			{
				if ((j >= 1 && j <= N) || (j <= width && j >= width - N+1))
					cout << "*";
				else
					cout << " ";
			}
			else if (i == N)
			{
				if (j == N || j == 2 * N - 1 || j == 3 * N - 2)
				{
					cout << "*";
				}
				else if (j > width - i + 1)
					break;
				else
					cout << " ";
			}
			else if (i < N)
			{
				if ((i == j) || (i + N - 1 == j) || (i == width - j + 1) || (j == width - i + 2 - N))
					cout << "*";
				else if (j > width - i + 1)
					break;
				else
					cout << " ";

			}
			else
			{
				if ((height - i + 1 == j) || (height - i + 1 + N - 1 == j) || (height - i + 1 == width - j + 1) || (j == width - (height - i + 1) + 2 - N))
					cout << "*";
				else if (j > width - (height - i + 1) + 1)
					break;
				else
					cout << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}

