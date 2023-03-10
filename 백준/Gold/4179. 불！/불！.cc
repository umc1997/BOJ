#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>

using namespace std;

int R, C;
int result = -1;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
char maze[1010][1010];
int fire[1010][1010];
int jihun[1010][1010];

void F_bfs() {
	queue<pair<int, int>> Q;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (maze[i][j] == 'F')
			{
				Q.push({ i, j });
				fire[i][j] = 1;
			}
		}
	}
	while (!Q.empty()) {
		auto cur = Q.front(); 
		Q.pop();
		for (int k = 0; k < 4; k++)
		{
			int nx = cur.first + dx[k];
			int ny = cur.second + dy[k];
			if (nx >= R || ny >= C || nx < 0 || ny < 0)
				continue;
			if (maze[nx][ny] == '#' || fire[nx][ny])
				continue;
			Q.push({ nx,ny });
			fire[nx][ny] = fire[cur.first][cur.second] + 1;
		}
	}
}

int solution() {
	F_bfs();

	queue<pair<int, int>> Q; 
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (maze[i][j] == 'J')
			{
				Q.push({ i, j });
				jihun[i][j] = 1;
			}
		}
	}
	while (!Q.empty()) {
		auto cur = Q.front();
		Q.pop();
		for (int k = 0; k < 4; k++)
		{
			int nx = cur.first + dx[k];
			int ny = cur.second + dy[k];

			if (nx >= R || ny >= C || nx < 0 || ny < 0)
				return jihun[cur.first][cur.second];
			if (maze[nx][ny] == '#' || jihun[nx][ny])
				continue;
			if (jihun[cur.first][cur.second] + 1 >= fire[nx][ny] && fire[nx][ny]) continue;
			Q.push({ nx,ny });
			jihun[nx][ny] = jihun[cur.first][cur.second] + 1;
		}
	}
	return -1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// input & assignment
	cin >> R >> C;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> maze[i][j];
		}
	}

	// recursive function
	int result = solution();

	// output
	if (result == -1)
		cout << "IMPOSSIBLE" << endl;
	else
		cout << result;
	return 0;
}