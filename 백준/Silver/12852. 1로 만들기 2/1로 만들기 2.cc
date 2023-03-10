#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>

using namespace std;
#define MAX 1000001
bool visited[MAX];
int path[MAX];
int N, K;
void prt(int k)
{
	if (k == 0)return;
	prt(path[k]);
	cout << k << ' ';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;
	cin >> N;
	visited[N] = 1;
	q.push(N);

	int t = MAX;
	int cnt = 0;
	bool find = false;
	while (!q.empty()) {
		int size = q.size();
		for (int i = 0; i < size; i++) {
			int p = q.front();
			q.pop();
			if (p == 1)
			{
				cout << cnt << '\n';
				prt(1);
				return 0;
			}
			if (p % 3 == 0 && !visited[p / 3])
			{
				q.push(p / 3);
				visited[p / 3] = 1;
				path[p / 3] = p;
			}
			if (p % 2 == 0 && !visited[p / 2])
			{
				q.push(p / 2);
				visited[p / 2] = 1;
				path[p / 2] = p;
			}
			if (p - 1 > 0 && !visited[p - 1])
			{
				q.push(p - 1);
				visited[p - 1] = 1;
				path[p - 1] = p;
			}
		}
		cnt++;
	}
	
	return 0;
}
