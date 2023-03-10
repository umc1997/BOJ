#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
unsigned int gcd(unsigned int a, unsigned int b)
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
	do
	{
		unsigned int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		unsigned int d = gcd(a, b);
		if (d == a)
			cout << "factor" << "\n";
		else if (d == b)
			cout << "multiple" << "\n";
		else
			cout << "neither" << "\n";

	} while (true);
	return 0;
}
