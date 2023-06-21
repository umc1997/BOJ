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
vector<vector<pii>> v;
int shortest_path_to_[50010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M;
	cin >> N >> M;
	v.resize(N + 1);
	memset(shortest_path_to_, 0x7f, sizeof(shortest_path_to_));
	for (int i = 0; i < M; i++) {
		int A, B, C;
		cin >> A >> B >> C;
		v[A].push_back(make_pair(B, C));
		v[B].push_back(make_pair(A, C));
	}
	priority_queue<pii, vector<pii>, greater<pii>> pq;
	shortest_path_to_[1] = 0;
	pq.push(make_pair(1, 0));
	while (!pq.empty()) {
		int current_edge = pq.top().first;
		int distance_to_current_edge = pq.top().second;
		pq.pop();
		int size = v[current_edge].size();
		for (int i = 0; i < size; i++) {
			int next_edge = v[current_edge][i].first;
			int distance_to_next_edge = v[current_edge][i].second;
			if (shortest_path_to_[next_edge] > shortest_path_to_[current_edge] + distance_to_next_edge) {
				shortest_path_to_[next_edge] = shortest_path_to_[current_edge] + distance_to_next_edge;
				pq.push(make_pair(next_edge, distance_to_next_edge));
			}
		}
	}
	cout << shortest_path_to_[N] << '\n';
	return 0;
}