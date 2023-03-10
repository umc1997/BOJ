#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b, a % b);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T = 0;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;

		long long res = (long long) N / gcd(N, M) * M;
		cout << res << '\n';
	}

	return 0;

}
