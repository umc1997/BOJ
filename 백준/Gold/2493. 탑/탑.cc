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
	int N;
	cin >> N;
	// solution
	stack<pii> st;
	for (int i = 1; i <= N; i++) {
		int input;
		cin >> input;
		while (!st.empty()) {
			if (st.top().first > input) {
				cout << st.top().second << ' ';
				break;
			}
			st.pop();
		}
		if (st.empty()) cout << 0 << ' ';
		st.push(make_pair(input, i));
	}
	cout << '\n';
	return 0;
}