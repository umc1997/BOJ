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

long long memo[2010][2010];
long long combination(long long n, long long k, long long m) {
	if (n < k) return 0;
	else if (memo[n][k] != -1) return memo[n][k];
	else if (k == 0 || k == n) return memo[n][k] = 1;
	else return (memo[n][k] = (combination(n - 1, k, m) + combination(n - 1, k - 1, m)) % m);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	long long N, K, M;
	memset(memo, -1, sizeof(memo));
	cin >> N >> K >> M;
	long long result = 1;
	while (N) {
		int a, b;
		a = N % M;
		b = K % M;
		result *= combination(a, b, M);
		result %= M;
		N /= M;
		K /= M;
	}
	cout << result  << '\n';
	return 0;
}