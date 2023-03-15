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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int K;
	cin >> K;
	vector<pair<int, int>> v;
	for (int i = 0; i < 6; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	// solution
	while (!(v[2].first == v[4].first && v[3].first == v[5].first)) {
		pair<int, int> a = v.back();
		v.pop_back();
		v.insert(v.begin(), a);
	}
	// output
	cout << K * (v[0].second * v[1].second - v[3].second * v[4].second) << '\n';

	return 0;
}