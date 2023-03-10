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

	unsigned int sum;
	cin >> sum;
	for (int i = 0; i < 9; i++)
	{
		unsigned int c;
		cin >> c;
		sum -= c;
	}
	cout << sum << "\n";
	
	return 0;
}
