#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int L, P;
	cin >> L >> P;
	int p, a, b, c, d, e;
	p = L * P;
	cin >> a >> b >> c >> d >> e;
	
	cout << a - p << " ";
	cout << b - p << " ";
	cout << c - p << " ";
	cout << d - p << " ";
	cout << e - p << "\n";
	return 0;
}