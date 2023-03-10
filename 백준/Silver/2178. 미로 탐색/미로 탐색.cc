#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <queue>
#include <cstring>

using namespace std;
bool visited[110][110] = { false, };
bool maze[110][110] = { false, };
int arr[110][110] = { 0, };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	memset(maze, false, sizeof(maze));
	memset(visited, false, sizeof(visited));
	memset(arr, 0, sizeof(arr));
	int N, M;
	cin >> N >> M;
	queue<pair<int, int>> Q;
	for (int i = 1; i <= N; i++)
	{
		string line;
		cin >> line;
		for (int j = 1; j <= M; j++)
		{
			maze[i][j] = line[j - 1] - '0';
		}
	}
	Q.push(make_pair(1, 1));
	while (!Q.empty())
	{
		int currentX = Q.front().first;
		int currentY = Q.front().second;
		if (currentX == N && currentY == M)
			break;
		Q.pop();

		if (currentX + 1 <= N && maze[currentX + 1][currentY] == 1 && !visited[currentX + 1][currentY] && arr[currentX + 1][currentY] == 0)
		{
			arr[currentX + 1][currentY] = arr[currentX][currentY] + 1;
			visited[currentX + 1][currentY] = true;
			Q.push(make_pair(currentX + 1, currentY));
		}
		if (currentX >= 2 && maze[currentX - 1][currentY] == 1 && !visited[currentX - 1][currentY] && arr[currentX - 1][currentY] == 0)
		{
			arr[currentX - 1][currentY] = arr[currentX][currentY] + 1;
			visited[currentX - 1][currentY] = true;
			Q.push(make_pair(currentX - 1, currentY));
		}
		if (currentY + 1 <= M && maze[currentX][currentY + 1] == 1 && !visited[currentX][currentY + 1] && arr[currentX][currentY + 1] == 0)
		{
			arr[currentX][currentY + 1] = arr[currentX][currentY] + 1;
			visited[currentX][currentY + 1] = true;
			Q.push(make_pair(currentX, currentY + 1));
		}
		if (currentX >= 2 && maze[currentX][currentY - 1] == 1 && !visited[currentX][currentY - 1] && arr[currentX][currentY - 1] == 0)
		{
			arr[currentX][currentY - 1] = arr[currentX][currentY] + 1;
			visited[currentX][currentY - 1] = true;
			Q.push(make_pair(currentX, currentY - 1));
		}
	}
	cout << arr[N][M] + 1 << "\n";
	return 0;
}