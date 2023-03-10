#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	cout << abs((A + D) - (B + C)) << "\n";
	return 0;
}