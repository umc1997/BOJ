#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
unsigned int inverse(unsigned int a, unsigned int b)
{
	a %= b;
	for (unsigned int i = 1; i <= b; i++)
	{
		if (a * i % b == 1)
			return i;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int E, S, M;
	cin >> E >> S >> M;
	unsigned int mod = 15 * 28 * 19;
	unsigned int ME = 28 * 19, MS = 15 * 19, MM = 15 * 28;
	unsigned int SE = inverse(ME, 15), SS = inverse(MS, 28), SM = inverse(MM, 19);
	unsigned int result = 0;
	result += E * ME * SE + S * MS * SS + M * MM * SM;
	result %= mod;
	if (result == 0)
		result += mod;
	cout << result << "\n";
	return 0;
}