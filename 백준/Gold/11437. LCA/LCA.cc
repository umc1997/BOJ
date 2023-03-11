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
using namespace std;

#define MAX 50000
#define MAX_DEPTH 18
vector<vector<int>> connectedNodes;
int depth[MAX + 10];
int parents[MAX + 10][MAX_DEPTH + 1];
bool visited[MAX + 10];
int N;
int LCA(int a, int b) {
	if (depth[a] > depth[b]) {
		int tmp = a;
		a = b, b = tmp;
	}
	if (depth[a] != depth[b]) {
		for (int i = MAX_DEPTH - 1; i >= 0; i--) {
			if (depth[parents[b][i]] < depth[a]) continue;
			b = parents[b][i];
		}
	}
	if (a == b)return a;

	for (int i = MAX_DEPTH - 1; i >= 0; i--) {
		if (parents[a][i] == parents[b][i]) continue;
		a = parents[a][i];
		b = parents[b][i];
	}
	return parents[a][0];
}
void sparse() {
	for (int k = 1; k < MAX_DEPTH; k++) {
		for (int i = 1; i <= N; i++) {
			parents[i][k] = parents[parents[i][k - 1]][k - 1];
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	cin >> N;
	connectedNodes.resize(N + 1);
	visited[1] = true;
	depth[1] = 1;

	// solution
	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		connectedNodes[a].push_back(b);
		connectedNodes[b].push_back(a);
		
	}
	queue<int> q;
	q.push(1);
	while (!q.empty()) {
		int currentNode = q.front();
		visited[currentNode] = true;
		q.pop();
		int connectedNodeNum = connectedNodes[currentNode].size();
		for (int i = 0; i < connectedNodeNum; i++) {
			if (!visited[connectedNodes[currentNode][i]])
			{
				q.push(connectedNodes[currentNode][i]);
				depth[connectedNodes[currentNode][i]] = depth[currentNode] + 1;
				parents[connectedNodes[currentNode][i]][0] = currentNode;
			}
		}
	}
	sparse();
	int M;
	cin >> M;
	while (M--) {
		int a, b;
		cin >> a >> b;
		cout << LCA(a, b) << '\n';
	}
	// output

	return 0;
}