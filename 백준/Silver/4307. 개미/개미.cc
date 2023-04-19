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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int T;
	cin >> T;
	while (T--) {
		int l, n;
		cin >> l >> n;
		int minT = 0, maxT = 0;
		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			minT = max(minT, min(input, l - input));
			maxT = max(maxT, max(input, l - input));
		}
		cout << minT << ' ' << maxT << '\n';
	}	
}