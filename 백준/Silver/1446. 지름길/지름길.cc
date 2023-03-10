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
int DP[10010];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int N, D;
	cin >> N >> D;
	for (int i = 0; i <= D; i++) {
		DP[i] = i;
	}
	vector <pair< int, pair<int, int>>> v;
	// solution
	for (int i = 0; i < N; i++) {
		int start, end, length;
		cin >> start >> end >> length;
		v.push_back(make_pair(start, make_pair(end, length)));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i <= D; i++) {
		if (i > 0)
			DP[i] = min(DP[i - 1] + 1, DP[i]);
		for (int j = 0; j < v.size(); j++) {
			int start = v[j].first;
			int end = v[j].second.first;
			int length = v[j].second.second;
			if (i == start && end <= D)
				DP[end] = min(DP[end], DP[start] + length);		
		}
	}
	// output
	cout << DP[D] << '\n';

	return 0;
}