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
	int L;
	cin >> L;
	double ll = ((double)L / 2) * ((double)L / 2) * sqrt(3);
	cout << fixed;
	cout.precision(25);
	cout << ll << "\n";
	return 0;
}