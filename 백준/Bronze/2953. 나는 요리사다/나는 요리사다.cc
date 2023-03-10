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
	int max = 0;
	int p;
	for (int i = 0; i < 5; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int sum = a + b + c + d;
		if (sum > max)
		{
			p = i;
			max = sum;
		}
	}
	cout << p + 1 << " " << max << "\n";
	return 0;
}
