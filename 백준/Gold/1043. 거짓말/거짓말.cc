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

int parent[60];
vector<int> know;
vector<vector<int>> v(60);
int Find(int x) {
	if (parent[x] == x) return x;
	else return x = Find(parent[x]);
}
void Union(int x, int y) {
	x = Find(x);
	y = Find(y);
	parent[x] = y;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M, K;
	cin >> N >> M >> K;
	for (int i = 1; i <= N; i++) parent[i] = i;
	for (int i = 0; i < K; i++) {
		int input;
		cin >> input;
		know.push_back(input);
	}
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		int first;
		cin >> first;
		v[i].push_back(first);
		for (int j = 1; j < num; j++) {
			int next;
			cin >> next;
			Union(first, next);
			first = next;
			v[i].push_back(first);
		}
	}
	for (int i = 0; i < v.size(); i++) {
		vector<int> cur = v[i];
		bool flag = false;
		for (int j = 0; j < cur.size(); j++) {
			for (int k = 0; k < know.size(); k++) {
				if (Find(cur[j]) == Find(know[k])) {
					flag = true;
					break;
				}
			}
			if (flag) break;
		}
		if(flag) M--;
	}
	cout << M << '\n';
	return 0;
}