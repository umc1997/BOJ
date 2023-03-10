#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define D 15746
using namespace std;
unsigned int inverse(unsigned int a, unsigned int m)
{
	a %= m;
	for (int i = 1; i < m; i++)
	{
		if (a * i % m == 1)
			return i;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int a,m;
	cin >> a >> m;

	
	cout << inverse(a,m) << "\n";
	return 0;
}
