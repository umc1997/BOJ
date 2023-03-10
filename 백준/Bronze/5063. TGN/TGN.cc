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
		long long r, e, c;
		cin >> r >> e >> c;
		if (e - c < r)
			cout << "do not advertise" << "\n";
		else if (e - c > r)
			cout << "advertise" << "\n";
		else
			cout << "does not matter" << "\n";
	}
	
	return 0;
}