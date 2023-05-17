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

int arr[200010];
int cnt[100010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++) cin >> arr[i];
	int right = 0;
	int left = 0;
	int res = 0;
	while (right < N) {
		if (cnt[arr[right]] != K) {
			cnt[arr[right]]++;
			right++;
		}
		else {
			cnt[arr[left]]--;
			left++;
		}
		res = max(res, right - left);
	}
	cout << res << '\n';
	return 0;
}