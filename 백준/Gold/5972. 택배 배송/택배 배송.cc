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
int shortest[50010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M;
	cin >> N >> M;
	v.resize(N + 1);
	memset(shortest, 0x7f, sizeof(shortest));
	for (int i = 0; i < M; i++) {
		int A, B, C;
		cin >> A >> B >> C;
		v[A].push_back(make_pair(B, C));
		v[B].push_back(make_pair(A, C));
	}
	priority_queue<pii, vector<pii>, greater<pii>> pq;
	shortest[1] = 0;
	pq.push(make_pair(1, 0));
	while (!pq.empty()) {
		int current = pq.top().first;
		int distance = pq.top().second;
		pq.pop();
		int size = v[current].size();
		for (int i = 0; i < size; i++) {
			int next = v[current][i].first;
			int next_distance = v[current][i].second;
			if (shortest[current] + next_distance< shortest[next]) {
				shortest[next] = shortest[current] + next_distance;
				pq.push(make_pair(next, next_distance));
			}
		}
	}
	cout << shortest[N] << '\n';
	return 0;
}