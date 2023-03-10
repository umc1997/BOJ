#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;

long long gcd(long long a, long long b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long a, b;

	cin >> a >> b;

	int d = gcd(a, b);
	for (int i = 0; i < d; i++) {
		cout << "1";
	}
	cout << '\n';
	
}
