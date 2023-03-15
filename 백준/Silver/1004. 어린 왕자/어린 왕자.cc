#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>
#include <set>
#include <unordered_map>
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
bool isInTheCircle(int x1, int y1, int cx, int cy, int r) {
	double dis = distance(x1, y1, cx, cy);
	if (dis < r) return false;
	else return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int T;
	cin >> T;
	while (T--) {
		int x1, y1, x2, y2, n;
		cin >> x1 >> y1 >> x2 >> y2 >> n;
		int res = 0;
		// solution
		while (n--) {
			int cx, cy, r;
			cin >> cx >> cy >> r;
			if (isInTheCircle(x1, y1, cx, cy, r) != isInTheCircle(x2, y2, cx, cy, r)) res++;
		}
		// output
		cout << res << '\n';
	}
	return 0;
}