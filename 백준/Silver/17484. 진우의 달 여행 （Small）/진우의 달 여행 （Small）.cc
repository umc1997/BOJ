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

int arr[7][7];
int visited[7];
int dir[3] = { -1,0,1 };

int N, M;
int res = 10000;

void dfs(int n, int m, int d) {
	if (n == N) {
		int sum = 0;
		for (int i = 0; i < N; i++) sum += visited[i];
		res = min(sum, res);
	}
	else {
		for (int i = 0; i < 3; i++) {
			int nextM = m + dir[i];
			if (nextM < 0 || nextM >= M) continue;
			if (d == i) continue;
			visited[n] = arr[n][nextM];
			dfs(n + 1, nextM, i);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];
	}
	for (int i = 0; i < M; i++) {
		memset(visited, 0, sizeof(visited));
		visited[0] = arr[0][i];
		dfs(1, i, -1);
	}
	cout << res << '\n';
	return 0;
}