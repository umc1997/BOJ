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
	int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;
	if (A < 0)
		cout << (-A) * C + D + B * E << "\n";
	else
		cout << (B - A) * E << "\n";
	return 0;
}