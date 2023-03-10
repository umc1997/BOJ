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
unsigned int lcm(unsigned int a, unsigned int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	unsigned int a;
	cin >> a;
	for (int i = 0; i < N - 1; i++)
	{
		unsigned int b;
		cin >> b;
		unsigned int d = gcd(a, b);
		cout << a / d << "/" << b / d << "\n";
	}
	
	return 0;
}
