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
typedef pair<int, int> pii;
vector<vector<pii>> weight;
int path[10010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int n;
	cin >> n;
	weight.resize(n + 1);
	memset(path, 0, sizeof(path));
	for (int i = 1; i < n; i++) {
		int e, v, w;
		cin >> e >> v >> w;
		weight[e].push_back(make_pair(v, w));
		weight[v].push_back(make_pair(e, w));
	}
	queue<int> q;
	path[1] = 0;
	q.push(1);
	while (!q.empty()) {
		int current = q.front();
		q.pop();
		int size = weight[current].size();
		for (int i = 0; i < size; i++) {
			int next = weight[current][i].first;
			int edge = weight[current][i].second;
			if (path[next] != 0 || next == 1) continue;
			path[next] = path[current] + edge;
			q.push(next);
		}
	}
	int max = 0;
	int target = 1;
	for (int i = 1; i <= n; i++) {
		if (path[i] > max) {
			max = path[i];
			target = i;
		}
	}
	memset(path, 0, sizeof(path));
	path[target] = 0;
	q.push(target); 
	while (!q.empty()) {
		int current = q.front();
		q.pop();
		int size = weight[current].size();
		for (int i = 0; i < size; i++) {
			int next = weight[current][i].first;
			int edge = weight[current][i].second;
			if (path[next] != 0 || next == target) continue;
			path[next] = path[current] + edge;
			q.push(next);
		}
	}
	for (int i = 1; i <= n; i++) {
		if (path[i] > max) 	max = path[i];
	}
	cout << max << '\n';
	return 0;
}