#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
double distance(int x1, int y1, int x2, int y2)
{
	int tmp1 = (x1 - x2) * (x1 - x2);
	int tmp2 = (y1 - y2) * (y1 - y2);
	return sqrt(tmp1 + tmp2);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	unsigned int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double d = distance(x1, y1, x2, y2);
		if (r1 < r2)
		{
			int tmp;
			tmp = r1;
			r1 = r2;
			r2 = tmp;
		}
		int result;
		if (d > r1 + r2)
			result = 0;
		else if (d == r1 + r2)
			result = 1;
		else
		{
			if (d > r1 - r2)
				result = 2;
			else
			{
				if (d == 0)
				{
					if (r1 == r2)
						result = -1;
					else
						result = 0;
				}
				else
				{
					if (d == r1 - r2)
						result = 1;
					else
						result = 0;
				}
			}
		}
		cout << result << "\n";
	}

	return 0;
}
