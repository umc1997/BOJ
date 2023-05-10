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

vector<int> v;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		sum += input;
		v.push_back(input);
	}
	cin >> M;
	sort(v.begin(), v.end());
	if (sum < M) cout << v[N - 1] << '\n';
	else {
		int left = 0;
		int right = v[N - 1];
		int res = 0;
		while (left <= right) {
			int mid = (left + right) / 2;
			int index = lower_bound(v.begin(), v.end(), mid) - v.begin();
			int tmp = 0;
			for (int i = 0; i < index; i++)
				tmp += v[i];
			tmp += (N - index) * mid;
			if (tmp > M) right = mid - 1;
			else {
				left = mid + 1;
				res = mid;
			}
		}
		cout << res << '\n';
	}
	return 0;
}