#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)return a;
	else return gcd(b, a%b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int a, b;
		cin >> a >> b;
		int g = gcd(a, b);
		cout << a / g * b << " " << g << "\n";
	}

	return 0;
}
