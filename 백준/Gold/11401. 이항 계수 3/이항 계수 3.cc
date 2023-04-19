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

#define MOD 1000000007

int recursive(int a, int pow) {
	if (a == 1) return 1;
	if (pow == 1) return a;
	else if (pow == 0) return 1;
	int tmp = recursive(a, pow / 2);
	if (pow % 2) return (long long) tmp * tmp % MOD * a % MOD;
	else return (long long) tmp * tmp % MOD;
}
int inverse(int a) {
	return recursive(a, MOD - 2);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, K;
	cin >> N >> K;
	K = min(N - K, K);
	int result = 1;
	for (int i = 0; i < K; i++) {
		result = (long long)result * (N - i) % MOD;
		result = (long long)result * inverse(K - i) % MOD;
	}
	cout << result << '\n';
	return 0;
}