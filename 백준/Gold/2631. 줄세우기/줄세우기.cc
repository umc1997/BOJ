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
int arr[210];
int DP[210];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	// solution
	memset(DP, 0, sizeof(DP));
	int res = 0;
	for (int i = 0; i < N; i++) {
		DP[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && DP[i] < DP[j] + 1) DP[i] = DP[j] + 1;
		}
		if (res < DP[i]) res = DP[i];
	}
	cout << N - res << '\n';

	return 0;
}