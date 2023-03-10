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

	unsigned int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	cout << (a * a + b * b + c * c + d * d + e * e) % 10 << "\n";
	
	return 0;
}