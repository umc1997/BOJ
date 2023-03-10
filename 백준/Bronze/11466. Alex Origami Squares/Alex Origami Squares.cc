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
	int h, w;
	cin >> h >> w;
	cout << fixed;
	cout.precision(5);
	int a = min(h, w);
	int b = max(h, w);
	double d1 = (double)a / 2;
	double d2 = min((double)a, (double)b / 3);
		
	cout << max(d1, d2) << "\n";
	return 0;
}