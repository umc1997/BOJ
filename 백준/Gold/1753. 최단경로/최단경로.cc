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
int shortest[20010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int V, E, K;
	cin >> V >> E >> K;
	weight.resize(V + 1);
	memset(shortest, 0x7f, sizeof(shortest));
	for (int i = 1; i <= E; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		weight[u].push_back(make_pair(v, w));
	}
	shortest[K] = 0;
	priority_queue<pii, vector<pii>, greater<pii>> pq;
	pq.push(make_pair(0, K));
	while (!pq.empty()) {
		int distance = pq.top().first;
		int current = pq.top().second;
		pq.pop();

		int size = weight[current].size();
		for (int i = 0; i < size; i++) {
			int next = weight[current][i].first;
			int edge = weight[current][i].second;
			if (distance + edge < shortest[next]) {
				shortest[next] = distance + edge;
				pq.push(make_pair(distance + edge, next));
			}
		}
	}
	for (int i = 1; i <= V; i++) {
		if (shortest[i] == 0x7f7f7f7f) cout << "INF\n";
		else cout << shortest[i] << '\n';
	}
	return 0;
}