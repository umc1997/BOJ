#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;

long long gcd(long a, long b)
{
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long c1, c2, c3, c4, c5, c6;
	cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;
	long long x1, x2, x3, x5, x6, x7;
	x2 = gcd(c1, c5);
	x6 = gcd(c3, c6);
	x1 = c1 / x2;
	x3 = c5 / x2;
	x5 = c6 / x6;
	x7 = c3 / x6;

	cout << x1 << " " << x2 << " " << x3 << " " << x5 << " " << x6 << " " << x7 << "\n";
}
