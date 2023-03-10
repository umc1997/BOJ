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
	unsigned int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		unsigned int x, y;
		cin >> x >> y;
		unsigned int d = y - x;
		unsigned int cnt = 1;
		unsigned int result = 1;
		while (d > cnt)
		{
			if (d > cnt)
			{
				d -= cnt;
				result++;
			}
			else
				break;
			if (d > cnt)
			{
				d -= cnt;
				result++;
			}
			else
				break;
			cnt++;
		}
		cout << result << endl;
	}
	return 0;
}
