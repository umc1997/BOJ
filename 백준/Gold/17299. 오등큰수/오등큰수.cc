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
int input[1000010];
int frequency[1000010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N;
	cin >> N;
	stack<pii> st;
	memset(input, 0, sizeof(input));
	memset(frequency, 0, sizeof(frequency));
	memset(output, -1, sizeof(output));
	for (int i = 0; i < N; i++) {
		cin >> input[i];
		frequency[input[i]]++;
	}
	for (int i = 0; i < N; i++) {
		if (st.empty()) st.push(pii(input[i], i));
		else {
			while (!st.empty() && frequency[st.top().first] < frequency[input[i]]) {
				output[st.top().second] = input[i];
				st.pop();
			}
			st.push(pii(input[i], i));
		}
	}
	for (int i = 0; i < N; i++) {
		cout << output[i] << ' ';
	}
	cout << '\n';
}