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
char convert(char a) {
	if (a == '0') return '1';
	else return '0';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N;
	cin >> N;
	string before, after;
	cin >> before >> after;
	int cnt = 0;
	int res = N + 1;
	// solution
	string current = before;
	current[0] = convert(current[0]);
	current[1] = convert(current[1]);
	cnt++;
	for (int i = 1; i < N; i++) {
		if (current[i - 1] != after[i - 1]) {
			current[i - 1] = convert(current[i - 1]);
			current[i] = convert(current[i]);
			if(i + 1 < N)
				current[i + 1] = convert(current[i + 1]);
			cnt++;
		}
	}
	if (current == after) res = cnt;

	current = before;
	cnt = 0;
	for (int i = 1; i < N; i++) {
		if (current[i - 1] != after[i - 1]) {
			current[i - 1] = convert(current[i - 1]);
			current[i] = convert(current[i]);
			if (i + 1 < N)
				current[i + 1] = convert(current[i + 1]);
			cnt++;
		}
	}
	if (current == after) res = min(cnt, res);
	if (res == N + 1)cout << "-1\n";
	else cout << res << '\n';

	return 0;
}