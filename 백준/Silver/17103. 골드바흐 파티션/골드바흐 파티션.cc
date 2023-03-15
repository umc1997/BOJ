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

bool prime[1000010];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	memset(prime, true, sizeof(prime));
	prime[1] = false;
	for (int i = 2; i < 1000010; i++) {
		if (prime[i]) {
			for (int j = i + i; j < 1000010; j += i) {
				prime[j] = false;
			}
		}
	}
	int T;
	cin >> T;

	//solution
	while (T--) {
		unsigned int even;
		cin >> even;
		if (even == 4) {
			cout << 1 << '\n';
			continue;
		}
		int cnt = 0;
		unsigned int firsthalf = 3;
		while (firsthalf <= even / 2) {
			unsigned int secondhalf = even - firsthalf;
			if (prime[firsthalf] && prime[secondhalf]) cnt++;
			firsthalf += 2;
		}
		// output
		cout << cnt << '\n';
	}
	return 0;
}