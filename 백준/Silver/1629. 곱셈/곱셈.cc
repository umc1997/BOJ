#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
long long int power_mod(long long int a, long long int b, long long int m)
{
	if (b == 0)
		return 1;
	else if (b == 1)
		return a % m;
	else
	{
		if (b % 2 == 1)
			return power_mod(a, (b + 1) / 2, m) * power_mod(a, b / 2, m) % m;
		else
			return power_mod(a, b / 2, m) * power_mod(a, b / 2, m) % m;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int a, b, c;
	cin >> a >> b >> c;
	cout << power_mod(a, b, c) << "\n";
	return 0;
}