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
	
	unsigned int R;
	cin >> R;
	cout.precision(15);
	cout << fixed;
	const double phi = 3.14159265358979323846264338327;
	cout << R * R * phi << "\n";
	cout << R * R * 2 << "\n";

	return 0;
}
