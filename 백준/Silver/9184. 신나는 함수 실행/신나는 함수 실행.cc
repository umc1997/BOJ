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
#define BASE 101
#define MAX (100 * BASE + 100) * BASE + 100
int idx(int a, int b, int c) {
	return ((a + 50) * BASE + b + 50) * BASE + c + 50;
}
int arr[MAX + 1];
int w(int a, int b, int c) {
	int index = idx(a, b, c);
	if (arr[index] != 0) return arr[index];
	if (a <= 0 || b <= 0 || c <= 0) {
		arr[index] = 1;
		return 1;
	}
	else if (a > 20 || b > 20 || c > 20) {
		arr[index] = w(20, 20, 20);
		return arr[index];
	}
	else if (a < b && b < c) {
		arr[index] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		return arr[index];
	}
	else {
		arr[index] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
		return arr[index];
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	memset(arr, 0, sizeof(arr));
	// input & assignment
	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;
		// solution
		int res = w(a, b, c);
		// output
		printf("w(%d, %d, %d) = %d\n", a, b, c, res);
	} 
	return 0;
}