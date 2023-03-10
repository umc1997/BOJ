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
	
	unsigned int x, y, w, h;
	cin >> x >> y >> w >> h;
	unsigned int tmp1, tmp2, m;
	tmp1 = min(x, y);
	tmp2 = min(w - x, h - y);
	m = min(tmp1, tmp2);
	cout << m << "\n";
	
	return 0;
}
