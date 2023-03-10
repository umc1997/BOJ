#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
unsigned int power_mod(unsigned int a, unsigned int b)
{
	unsigned int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
		if (result > 10)
			result %= 10;
	}
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		unsigned int a, b;
		cin >> a >> b;
		unsigned int result = power_mod(a, b);
		if (result == 0)
			result += 10;
		cout << result << "\n";
	}
	return 0;
}