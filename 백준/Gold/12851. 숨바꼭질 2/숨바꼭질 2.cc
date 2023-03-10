#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
#define MAX 100001
bool visited[MAX];
int N, K;
int t = MAX, s = 1;
queue<int> q;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	if (N == K)
	{
		cout << 0 << "\n" << 1 << '\n';
		return 0;
	}
	visited[N] = true;
	q.push(N);
	int cnt = 1;
	bool find = false;
	while (!q.empty()) {
		int size = q.size();
		for (int j = 0; j < size; j++) {
			int p = q.front();
			q.pop();
			visited[p] = true;
			int arr[3] = { 2 * p, p + 1 , p - 1 };
			for (int i = 0; i < 3; i++)
			{
				if (arr[i] >= MAX || arr[i] < 0) continue;
				if (arr[i] == K)
				{
					find = true;
					if (t > cnt) {
						t = cnt;
						s = 0;
					}
					s++;
					continue;
				}
				if (!visited[arr[i]]) q.push(arr[i]);
				
			}
		}
		cnt++;
		if (find)
			break;
	}
	
	cout << t << '\n' << s << '\n';
	return 0;
}
