#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>
using namespace std;
int input[1510];
priority_queue<int, vector<int>, greater<int>> pq;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> input[j];
		}
		sort(input, input + N);
		reverse(input, input + N);
		for (int j = 0; j < i + 1; j++) {
			pq.push(input[j]);
			if (pq.size() > N) {
				pq.pop();
			}
		}
	}
	// output
	cout << pq.top() << '\n';
	return 0;
}