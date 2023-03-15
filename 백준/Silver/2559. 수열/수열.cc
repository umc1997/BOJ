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

int arr[100010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++) cin >> arr[i];
	// solution
	int cur = 0;
	for (int i = 0; i < K; i++) cur += arr[i];
	int res = cur;
	for (int i = 1; i < N - K + 1; i++) {
		cur += arr[i + K - 1] - arr[i - 1];
		if (cur > res) res = cur;
	}
	// output
	cout << res << '\n';
	return 0;
}