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

int grade[110][110];
struct team {
	int id;
	int point;
	int times;
	int lasttime;
};
bool compare(team a, team b) {
	if (a.point == b.point) {
		if (a.times == b.times) {
			return a.lasttime < b.lasttime;
		}
		else return a.times < b.times;
	}
	else return a.point > b.point;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int T;
	cin >> T;
	while (T--) {
		int n, k, t, m;
		cin >> n >> k >> t >> m;
		memset(grade, 0, sizeof(grade));
		vector<team> vt(n);
		for (int i = 0; i < n; i++) {
			vt[i].id = i + 1;
			vt[i].point = 0;
			vt[i].times = 0;
			vt[i].lasttime = 0;
		}
		for (int log = 1; log <= m; log++) {
			int i, j, s;
			cin >> i >> j >> s;
			grade[i][j] = max(grade[i][j], s);
			vt[i - 1].times = vt[i - 1].times + 1;
			vt[i - 1].lasttime = log;
		}
		for (int i = 1; i <= n; i++)
		{
			int sum = 0;
			for (int j = 1; j <= k; j++) {
				sum += grade[i][j];
			}
			vt[i - 1].point = sum;
		}
		sort(vt.begin(), vt.end(), compare);
		for (int i = 0; i < n; i++) {
			if (vt[i].id == t) {
				cout << i + 1 << '\n';
				break;
			}
		}
	}

	return 0;
}