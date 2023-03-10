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
	int T, A, B, C;
	cin >> T;
	A = T / 300;
	T %= 300;
	B = T / 60;
	T %= 60;
	C = T / 10;
	T %= 10;
	if (T != 0)
	{
		cout << -1 << "\n";
		return 0;
	}
	cout << A << " " << B << " " << C << " ";
	return 0;
}