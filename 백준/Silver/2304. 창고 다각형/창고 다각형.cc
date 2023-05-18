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
vector<pii> input;
bool compare(pii a, pii b) {
	return a.first < b.first;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int L, H;
		cin >> L >> H;
		input.push_back(make_pair(L, H));
	}
	sort(input.begin(), input.end(), compare);
	stack<pii> st;
	st.push(input[0]);
	int area = 0;
	int left = 0, right = 0;
	for (int i = 1; i < N; i++) {
		if (st.top().second < input[i].second) {
			area += ((input[i].first - st.top().first) * st.top().second);
			st.pop();
			st.push(input[i]);
		}
	}
	left = st.top().first;
	while (!st.empty()) st.pop();
	st.push(input[N - 1]);
	for (int i = N - 2; i >= 0; i--) {
		if (st.top().second < input[i].second) {
			area += ((st.top().first - input[i].first) * st.top().second);
			st.pop();
			st.push(input[i]);
		}
	}
	right = st.top().first;
	area += ((right - left + 1) * st.top().second);
	cout << area << '\n';
	return 0;
}