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
	unsigned int A, B, C, D, E, F;
	cin >> A >> B >> C >> D >> E >> F;
	cout << A + B + C + D - min(min(A, B), min(C, D)) + max(E, F) << "\n";
	return 0;
}