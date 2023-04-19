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

int arr[1010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M;
	cin >> N >> M;
	memset(arr, 0, sizeof(arr));
	int cur = 0;
	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		cur += A;
		cur %= M;
		arr[cur]++;
	}
	long long  result = 0;
	for (int i = 0; i < M; i++) {
		result += (long long) arr[i] * (arr[i] - 1) / 2;
	}
	result += arr[0];
	cout << result << '\n';
	
	return 0;
}