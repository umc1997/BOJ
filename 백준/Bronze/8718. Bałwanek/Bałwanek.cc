#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int x, k;
	cin >> x >> k;
	if (7 * k <= x)
		cout << 7 * k * 1000 << "\n";
	else if (3.5 * k <= x)
		cout << 3.5 * k * 1000 << "\n";
	else if (1.75 * k <= x)
		cout << 1.75 * k * 1000 << "\n";
	else
		cout << 0 << "\n";
	return 0;	
}
