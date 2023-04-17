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

long long xgcd(long long a, long long b, long long* x, long long* y) {
	if (b == 0) {
		*x = 1;
		*y = 0;
		return a;
	}
	long long x1, y1;
	long long gcd = xgcd(b, a % b, &x1, &y1);
	*x = y1;
	*y = x1 - (a / b) * y1;
	return gcd;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int t;
	cin >> t;
	while (t--) {
		long long K, C, x, y;
		cin >> K >> C;
		long long g = xgcd(K, C, &x, &y);
		if (g != 1) cout << "IMPOSSIBLE\n";
		else{
			while (x >= 0 || y <= 0) {
				x = x - C;
				y = K + y;
			}
			if(y > 1000000000) cout << "IMPOSSIBLE\n";
			else cout << y << '\n';
		}
	}
	return 0;
}