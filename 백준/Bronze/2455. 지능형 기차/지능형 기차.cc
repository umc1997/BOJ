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
	int num[5];
	num[0] = 0;
	for (int i = 1; i < 5; i++)
	{
		int a, b;
		cin >> a >> b;
		num[i] = num[i - 1] - a + b;
	}
	sort(num, num + 5);
	cout << num[4] << "\n";
	return 0;
}
