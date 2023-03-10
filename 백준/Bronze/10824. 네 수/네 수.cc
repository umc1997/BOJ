#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
long long f(long long a, long long b)
{
	long long p = 1000000;
	while (true)
	{
		if (b / p == 0)
			p /= 10;
		else
			break;
	}
	return a * p * 10 + b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int A, B, C, D;
	cin >> A >> B >> C >> D;
	cout << f(A, B) + f(C, D) << "\n";
}
