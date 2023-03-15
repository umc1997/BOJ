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

#define MAX 100000
int gcd(int a, int b)
{
	if (b == 0)	return a;
	return gcd(b, a % b);
}
int arr[MAX + 1];
int dif[MAX + 1];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr, arr + N);
	for (int i = 0; i < N - 1; i++) dif[i] = arr[i + 1] - arr[i];
	int d = dif[0];
	for (int i = 1; i < N - 1; i++) d = gcd(d, dif[i]);
	long long result = 0;
	for (int i = 0; i < N - 1; i++) result += dif[i] / d - 1;
	// output
	cout << result << '\n';
	return 0;
}