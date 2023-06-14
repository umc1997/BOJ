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
char input[500010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N;
	cin >> N >> input;
	// solution
	int red = 0;
	int blue = 0;
	for (int i = 0; i < N; i++) {
		if (input[i] == 'R') red++;
		else blue++;
	}
	int res = min(red, blue);
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (input[i] != input[0]) break;
		cnt++;
	}
	if (input[0] == 'R') res = min(res, red - cnt);
	else res = min(res, blue - cnt);

	cnt = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (input[i] != input[N - 1]) break;
		cnt++;
	}
	if (input[N - 1] == 'R') res = min(res, red - cnt);
	else res = min(res, blue - cnt);

	cout << res << '\n';
	return 0;
}