#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

#define MOD 1000000007
using namespace std;

void xgcd(long long a, long long b, long long* x, long long* y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return;
    }
    // To store results of recursive call
    long long x1, y1;
    xgcd(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

}
long long inverse(long long a)
{
    long long x, y;
    xgcd(a, MOD, &x, &y);
    long long res = (x % MOD + MOD) % MOD;

    return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long M;
	cin >> M;
    long long result = 0;
    for (int i = 0; i < M; i++)
    {
        long long N, S;
        cin >> N >> S;
        N = inverse(N);
        N *= S;
        N %= MOD;
        result += N;
        result %= MOD;
    }
    cout << result << '\n';
	return 0;

}