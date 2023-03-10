#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

void p(long long a, int d)
{
	if (d == 1)
	{
		cout << a << "\n";
		return;
	}
	a *= 10;
	for (int i = 1; i < 10; i+=2)
	{
		bool isPrime = true;
		long long newNum = a + i;
		for (long long j = 2; j <= sqrt(newNum); j++)
		{
			if (newNum % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			p(a + i, d - 1);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	p(2, n);
	p(3, n);
	p(5, n);
	p(7, n);
}
