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
using namespace std;

int arr[110];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int N, M;
	cin >> N >> M;
	memset(arr, 0, sizeof(arr));
	// solution
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < M; i++) {
		int begin, mid, end;
		cin >> begin >> end >> mid;
		queue<int> q;
		for (int j = mid; j <= end; j++) q.push(arr[j]);
		for (int j = begin; j < mid; j++) q.push(arr[j]);
		int ptr = begin;
		while (!q.empty())
		{
			arr[ptr] = q.front();
			q.pop();
			ptr++;
		}
	}
	// output
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	return 0;
}