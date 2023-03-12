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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;
	cout << ((a1 * n0 + a0 <= c * n0) && (c - a1 >= 0));
	
	// output

	return 0;
}