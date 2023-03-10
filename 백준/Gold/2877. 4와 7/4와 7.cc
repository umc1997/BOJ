#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long k;

	cin >> k;
	k++;
	unsigned int r = 0;
	long long tmp = k;
	while (tmp >>= 1)
		r++;
	for (int i = r - 1; i >= 0; i--)
	{
		if ((1 << i) & k)
			cout << '7';
		else
			cout << '4';
	}
	cout << "\n";
}
