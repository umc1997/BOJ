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

	unsigned int A, B, C;
	cin >> A >> B >> C;
	B += C;
	while (B >= 60)
	{
		B -= 60;
		A += 1;
	}
	while (A >= 24)
		A -= 24;
	cout << A << " " << B << "\n";
	return 0;
}