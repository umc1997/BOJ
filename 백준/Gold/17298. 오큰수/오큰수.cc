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

typedef pair<int, int> pii;
int output[1000010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N;
	cin >> N;
	stack<pii> st;
	memset(output, -1, sizeof(output));
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (st.empty()) st.push(pii(input, i));
		else {
			while (!st.empty() && st.top().first < input) {
				output[st.top().second] = input;
				st.pop();
			}
			st.push(pii(input, i));
		}
	}
	for (int i = 0; i < N; i++) {
		cout << output[i] << ' ';
	}
	cout << '\n';
}