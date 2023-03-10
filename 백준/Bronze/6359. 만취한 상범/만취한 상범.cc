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
	while (T--)
	{
		int a;
		cin >> a;
		cout << int(sqrt(a)) << "\n";
	}
	return 0;
}