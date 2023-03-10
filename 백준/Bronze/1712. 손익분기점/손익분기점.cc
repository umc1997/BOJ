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
	if (C <= B)
	{
		cout << -1 << "\n";
		return 0;
	}
	cout << (int) A / (C - B) + 1 << "\n";

}
