#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>
#include <set>
#include <stack>
#include <unordered_map>
using namespace std;

int board[1010][1010];
int dis[1010][1010];
typedef pair<int, int> pii;
queue<pii> q;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1, -1,0,0 };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int n, m;
	cin >> n >> m;
	memset(dis, -1, sizeof(dis));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 2) {
				q.push(make_pair(i, j));
				dis[i][j] = 0;
			}
		}
	}
	while (!q.empty()) {
		pii current = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = current.first + dx[i];
			int ny = current.second + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (dis[nx][ny] != -1) continue;
			if (board[nx][ny] == 0) continue;
			dis[nx][ny] = dis[current.first][current.second] + 1;
			q.push(make_pair(nx, ny));
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0) cout << 0 << ' ';
			else cout << dis[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}