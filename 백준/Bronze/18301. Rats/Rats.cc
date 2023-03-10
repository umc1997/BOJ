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
	int A, B, C;
	cin >> A >> B >> C;
	cout << (A + 1) * (B + 1) / (C + 1) - 1 << "\n";
	return 0;
}

