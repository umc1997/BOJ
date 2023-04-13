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
#include <unordered_map>
using namespace std;

int input[210][210];
int visited[210];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> input[i][j];
	}
	memset(visited, false, sizeof(visited));
	queue <int> q;
	for (int i = 0; i < N; i++) {
		if (visited[i]) continue;
		q.push(i);
		int cur = q.front() + 1;
		while (!q.empty()) {
			visited[i] = cur;
			for (int j = 0; j < N; j++) {
				if (input[q.front()][j] && !visited[j]) {
					q.push(j); 
					visited[j] = cur;
				}
			}
			q.pop();
		}
	}
	bool res = true;
	int tmp;
	cin >> tmp;
	int check = visited[tmp - 1];
	for (int i = 1; i < M; i++) {
		cin >> tmp;
		if (check != visited[tmp - 1]) {
			res = false;
		}
	}
	// output
	if (res) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}