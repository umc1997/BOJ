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

	unsigned int n = 0;
	cin >> n;
	unsigned int res = 0;
	while (n)
	{
		int a = n % 10;
		res += pow(a, 5);
		n /= 10;
	}
	cout << res << endl;
	
}