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
	unsigned int A, B, C, D, P;
	cin >> A >> B >> C >> D >> P;
	unsigned int a = A * P;
	unsigned int b = B;
	if (P > C)
		b += (P - C) * D;
	cout << min(a, b) << "\n";
	
	return 0;
}