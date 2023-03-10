#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int arr[510][510];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	int res = 0;
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < M;j++)
		{
			cin >> arr[i][j];
		}
	}

	// 2 + 2 (need append)
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < M - 1;j++)
		{
			int a = arr[i][j] + arr[i][j + 1];
			if (i + 1 < N)
			{
				int b = a + arr[i + 1][j] + arr[i + 1][j + 1];
				res = (res > b) ? res : b;
				if (j + 2 < M)
				{
					b = a + arr[i + 1][j + 1] + arr[i + 1][j + 2];
					res = (res > b) ? res : b;
				}
				if (j - 1 >= 0)
				{
					b = a + arr[i + 1][j] + arr[i + 1][j - 1];
					res = (res > b) ? res : b;
				}
				if (i - 1 >= 0)
				{
					int c = a + arr[i - 1][j] + arr[i + 1][j + 1];
					int d = a + arr[i - 1][j + 1] + arr[i + 1][j];
					res = max({ c,d, res });
				}
			}

		}
	}
	// 3 + 1 (row)
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < M - 2;j++)
		{
			int a = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
			if (j >= 1)
			{
				int b = a + arr[i][j - 1];
				res = (res > b) ? res : b;
			}
			if (j + 3 < M)
			{
				int b = a + arr[i][j + 3];
				res = (res > b) ? res : b;
			}
			if (i >= 1)
			{
				int k = max({ arr[i - 1][j],arr[i - 1][j + 1] ,arr[i - 1][j + 2] });
				res = max(a + k, res);
			}
			if (i < N - 1)
			{
				int k = max({ arr[i + 1][j],arr[i + 1][j + 1],arr[i + 1][j + 2] });
				res = max(a + k, res);
			}
		}
	}

	// 3 + 1 (col)
	for (int i = 0;i < N - 2;i++)
	{
		for (int j = 0;j < M;j++)
		{
			int a = arr[i][j] + arr[i + 1][j] + arr[i + 2][j];
			if (i >= 1)
			{
				int b = a + arr[i - 1][j];
				res = (res > b) ? res : b;
			}
			if (i + 3 < N)
			{
				int b = a + arr[i + 3][j];
				res = (res > b) ? res : b;
			}
			if (j >= 1)
			{
				int k = max({ arr[i][j - 1], arr[i + 1][j - 1],arr[i + 2][j - 1] });
				res = max(a + k, res);

			}
			if (j < M - 1)
			{
				int k = max({ arr[i][j + 1], arr[i + 1][j + 1],arr[i + 2][j + 1] });
				res = max(a + k, res);
			}
		}
	}
	cout << res << '\n';

}