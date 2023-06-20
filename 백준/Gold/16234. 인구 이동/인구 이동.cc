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
using namespace std;

typedef pair<int, int> pii;
int A[60][60];
bool visited[60][60];
vector<vector<pii>> unions;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, L, R;
	cin >> N >> L >> R;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> A[i][j];
	}
	int days = 0;
	while (true) {
		// 1. check difference
		memset(visited, false, sizeof(visited));
		unions.clear();
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (visited[i][j]) continue;
				visited[i][j] = true;
				unions.push_back({ make_pair(i,j) });
				queue<pii> q;
				q.push(make_pair(i, j));
				while (!q.empty()) {
					int x = q.front().first;
					int y = q.front().second;
					q.pop();
					for (int d = 0; d < 4; d++) {
						int nx = x + dx[d];
						int ny = y + dy[d];
						if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
						if (visited[nx][ny]) continue;
						int dif = abs(A[x][y] - A[nx][ny]);
						if (dif >= L && dif <= R) {
							q.push(make_pair(nx, ny));
							unions[cnt].push_back(make_pair(nx, ny));
							visited[nx][ny] = true;
						}
					}
				}
				cnt++;
			}
		}
		if (unions.size() == N * N) break;
		// 2. move
		for (int i = 0; i < unions.size(); i++) {
			int sum = 0;
			vector<pii> current = unions[i];
			for (int j = 0; j < current.size(); j++) {
				int x = current[j].first;
				int y = current[j].second;
				sum += A[x][y];
			}
			sum /= current.size();
			for (int j = 0; j < current.size(); j++) {
				int x = current[j].first;
				int y = current[j].second;
				A[x][y] = sum;
			}
		}
		days++;
	}
	cout << days << '\n';

	return 0;
}