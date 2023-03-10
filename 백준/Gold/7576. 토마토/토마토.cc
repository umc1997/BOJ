#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>

using namespace std;
int arr[1010][1010];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> M >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = 0;
		}
	}
	queue<pair<int, int>> Q;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				Q.push(make_pair(i, j));
		}
	}
	while (!Q.empty())
	{
		pair<int, int> current = Q.front();
		Q.pop();
		if (current.first + 1 < N && arr[current.first + 1][current.second] == 0)
		{
			arr[current.first + 1][current.second] = arr[current.first][current.second] + 1;
			Q.push(make_pair(current.first + 1, current.second));
		}
		if (current.first - 1 >= 0 && arr[current.first - 1][current.second] == 0)
		{
			arr[current.first - 1][current.second] = arr[current.first][current.second] + 1;
			Q.push(make_pair(current.first - 1, current.second));
		}
		if (current.second + 1 < M && arr[current.first][current.second + 1] == 0)
		{
			arr[current.first][current.second + 1] = arr[current.first][current.second] + 1;
			Q.push(make_pair(current.first, current.second + 1));
		}
		if (current.second - 1 >= 0 && arr[current.first][current.second - 1] == 0)
		{
			arr[current.first][current.second - 1] = arr[current.first][current.second] + 1;
			Q.push(make_pair(current.first, current.second - 1));
		}
	}
	int days = INT_MIN;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (arr[i][j] == 0)
			{
				cout << -1 << "\n";
				return 0;
			}
			if (days < arr[i][j])
				days = arr[i][j];
		}
	}
	cout << days - 1 << "\n";
	return 0;
}