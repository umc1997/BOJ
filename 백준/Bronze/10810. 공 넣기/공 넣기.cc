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
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		for (int j = a; j <= b; j++) arr[j] = c;
	}

	// output
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	return 0;
}