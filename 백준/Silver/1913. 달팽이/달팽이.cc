#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#define MAX 1000
using namespace std;
int arr[MAX][MAX];
void p(int a ,int b, int d)
{
	if (d == 1)
	{
		arr[a][b] = 1;
		return;
	}
	else
	{
		arr[a][b] = d * d;
		for (int i = 1; i < d; i++)
		{
			arr[a + i][b] = arr[a + i - 1][b] - 1;
		}

		for (int j = 1; j < d; j++)
		{
			arr[a + d - 1][b + j] = arr[a + d - 1][b + j - 1] - 1;
		}

		for (int i = 1; i < d; i++)
		{
			arr[a + d - i - 1][b + d - 1] = arr[a + d - i][b + d - 1] - 1;
		}

		for (int j = 2; j < d; j++)
		{
			arr[a][b + d - j] = arr[a][b + d - j + 1] - 1;
		}

		p(a + 1, b + 1, d - 2);
		return;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int k;
	cin >> N >> k;

	p(0, 0, N);
	int x, y;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << arr[i][j] << " ";
			if (arr[i][j] == k)
			{
				x = i + 1;
				y = j + 1;
				
			}
		}
		cout << "\n";
	}
	cout << x << ' ' << y << '\n';
	return 0;
}
