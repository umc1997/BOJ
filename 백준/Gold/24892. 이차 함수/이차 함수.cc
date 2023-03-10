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
long long gcd(long long a, long long b)
{
    if (b == 0) return a;
    else return gcd(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, a, b;
    cin >> n >> a >> b;
    long long p = pow((b - a), 3) * (n - 1) * (n + 1);
    long long q = 6 * n * n;
    long long g = gcd(p, q);
    p /= g;
    q /= g;
    long long inver = inverse(q);
    cout << inver * p % MOD << '\n';

    return 0;

}