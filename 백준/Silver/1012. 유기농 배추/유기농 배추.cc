#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;
bool arr[60][60];
bool visited[60][60];
unsigned int M, N, K;
void dfs(int x, int y) {
	visited[x][y] = true;
	if (x + 1 < M && arr[x + 1][y] && !visited[x + 1][y])
		dfs(x + 1, y);
	if (x - 1 >= 0 && arr[x - 1][y] && !visited[x - 1][y])
		dfs(x - 1, y);
	if (y + 1 < N && arr[x][y + 1] && !visited[x][y + 1])
		dfs(x, y + 1);
	if (y - 1 >= 0 && arr[x][y - 1] && !visited[x][y - 1])
		dfs(x, y - 1);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		unsigned int cnt = 0;
		cin >> M >> N >> K;
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				arr[i][j] = false;
				visited[i][j] = false;
			}
		}
		for (int i = 0; i < K; i++)
		{
			int a, b;
			cin >> a >> b;
			arr[a][b] = true;
		}
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (arr[i][j] && !visited[i][j])
				{
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
	return 0;	
}
