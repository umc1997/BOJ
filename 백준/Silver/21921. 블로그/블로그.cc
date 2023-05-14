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
	int N, X;
	cin >> N >> X;
	queue<int> q;
	int sum = 0;
	for (int i = 0; i < X; i++) {
		int input;
		cin >> input;
		q.push(input);
		sum += input;
	}
	int res1 = sum;
	int res2 = 1;
	for (int i = X; i < N; i++) {
		int input;
		cin >> input;
		sum -= q.front();
		sum += input;
		q.pop();
		q.push(input);

		if (res1 == sum) {
			res2++;
		}
		else if (res1 < sum) {
			res1 = sum;
			res2 = 1;
		}
		
	}
	if (res1 == 0) cout << "SAD\n";
	else cout << res1 << '\n' << res2 << '\n';

	return 0;
}