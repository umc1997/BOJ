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
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	cin >> a >> b;
	string fa = "";
	string fb = "";
	int g = gcd(a.size(), b.size());
	for (int i = 0; i < b.size() / g; i++)
		fa += a;
	for (int i = 0; i < a.size() / g; i++)
		fb += b;
	if (fa == fb)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';
}
