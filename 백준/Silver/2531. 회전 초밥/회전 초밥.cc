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
int input[30010];
bool visited[3010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, d, k, c;
	cin >> N >> d >> k >> c;
	for (int i = 0; i < N; i++) cin >> input[i];

	// solution
	int res = 0;
	for (int i = 0; i < N; i++) {
		int cnt = k;
		bool flag = false;
		for (int j = i; j < i + k; j++) {
			if (visited[input[j % N]])cnt--;
			else visited[input[j % N]] = true;

			if (input[j % N] == c) flag = true;
		}
		if (!flag) cnt ++;
		res = max(res, cnt);
		memset(visited, false, sizeof(visited));
	}

	cout << res << '\n';
	return 0;
}