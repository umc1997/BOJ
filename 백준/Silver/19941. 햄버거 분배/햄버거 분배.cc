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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, K;
	string input = "";
	cin >> N >> K >> input;
	int res = 0;
	for (int i = 0; i < N; i++) {
		if (input[i] == 'P') {
			int left = max(0, i - K);
			int right = min(N - 1, i + K);
			for (int p = left; p <= right; p++) {
				if (input[p] == 'H') {
					input[p] = 'X';
					break;
				}
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (input[i] == 'X')  res++;
	}
	cout << res << '\n';
	return 0;
}