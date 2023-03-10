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
	unsigned int a, b;
	cin >> a >> b;
	unsigned int d = gcd(a, b);
	cout << d << "\n" << a * b / d << "\n";
	
	return 0;
}
