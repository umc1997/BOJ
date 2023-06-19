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
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M, L, K;
	cin >> N >> M >> L >> K;
	vector<pii> v;
	for (int i = 0; i < K; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	int res = 0;	
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < K; j++) {
			int startX = v[i].first;
			int startY = v[j].second;
			int cnt = 0;
			for (int k = 0; k < K; k++) {
				if (startX <= v[k].first && startX + L >= v[k].first && startY <= v[k].second && startY + L >= v[k].second) cnt++;
			}
			res = max(res, cnt);
		}
	}
	cout << K - res << '\n';

	return 0;
}