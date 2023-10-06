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
#define MAX 100000
int dist[MAX + 1];
deque<int> Q = {};
int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int N, K;
	cin >> N >> K;
	int result = 0;
	// solution
	if (N >= K) {
		cout << N - K << endl;
		return 0;
	}
	Q.push_front(N);
	memset(dist, 0xff, sizeof(dist));
	dist[N] = 0;
	while (!Q.empty()) {
		int front = Q.front();
		if (front == K) {
			cout << dist[front]<< endl;
			break;
		}
		Q.pop_front();
		int arr[3] = { front * 2, front - 1 , front + 1};
		for (int i = 0; i < 3; i++)
		{
			int num = arr[i];
			if (num > MAX || dist[num] >= 0 || num == 0) continue;
			if (num == front * 2) {
				dist[num] = dist[front];
				Q.push_front(num);
			}
			else {
				dist[num] = dist[front] + 1;
				Q.push_back(num);
			}
		}
	}
	// output

	return 0;
}