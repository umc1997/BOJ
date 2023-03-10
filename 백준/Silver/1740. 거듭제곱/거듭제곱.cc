#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N;
	cin >> N;
	long long res = 0;
	long long base = 1;
	while (N)
	{
		int bit = N % 2;
		N /= 2;
		if (bit)
			res += base;
		base *= 3;
	}
	cout << res << '\n';
}
