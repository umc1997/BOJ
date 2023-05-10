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

vector<vector<int>> v;
int na[1010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		v.clear();
		v.resize(210);
		memset(na, 0, sizeof(na));
		for (int i = 1; i <= N; i++) {
			int input;
			cin >> input;
			v[input].push_back(i);

		}
		for (int i = 1; i <= 200; i++) {
			vector<int> c = v[i];
			if (c.size() > 0 && c.size() < 6) {
				for (int j = 0; j < c.size(); j++) {
					int nap = c[j];
					for (int k = nap + 1; k <= N; k++)na[k]++;
				}
			}
		}
		int res;
		int cnt1 = 5000;
		int cnt2 = 0;
		for (int i = 1; i <= 200; i++) {
			vector<int> c = v[i];
			if (c.size() < 6) continue;
			int cur = 0;
			for (int j = 0; j < 4; j++) {
				cur += (c[j] - na[c[j]]);
			}
			if (cur < cnt1) {
				cnt1 = cur;
				cnt2 = c[4];
				res = i;
			}
			else if (cur == cnt1) {
				if (cnt2 > c[4]) {
					cnt2 = c[4];
					res = i;
				}
			}
		}
		cout << res << '\n';
	}
	return 0;
}