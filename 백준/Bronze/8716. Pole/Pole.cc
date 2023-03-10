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
	long long x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	long long width = max((long long) 0, min(x2, x4) - max(x1, x3));
	long long height = max((long long)0, min(y1, y3) - max(y2, y4));
	long long result = sqrt(width * width)  * sqrt(height * height);
	cout << result << "\n";

	return 0;	
}
