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

int input[100010];
vector<int> dist;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) cin >> input[i];
	int left = 1;
	int right = N;
	int res = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		bool flag = true;

		int current = 0;
		for (int i = 0; i < M; i++) {
			if (input[i] - mid <= current) {
				current = input[i] + mid;
			}
			else { 
				flag = false; 
				break; 
			}
		}
		if (N - current > 0) flag = false;

		if (flag) {
			res = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	cout << res << '\n';
	return 0;
}