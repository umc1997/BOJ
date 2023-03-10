#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		double f;
		cin >> f;
		f *= 0.8;
		cout << fixed;
		cout.precision(2);
		cout << "$" << f << "\n";
	}
	
	return 0;
}