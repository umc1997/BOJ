#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int T;
	cin >> T;
	int current = 1;
	while (T--)
	{
		int a, b;
		cin >> a >> b;
		if (a == current)
			current = b;
		else if (b == current)
			current = a;
	}
	cout << current << "\n";
	return 0;
}