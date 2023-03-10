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
	unsigned int a, b;
	cin >> a >> b;
	string output;
	if (a > 2)
		output = "After";
	else if (a == 1)
		output = "Before";
	else
	{
		if (b == 18)
			output = "Special";
		else if (b < 18)
			output = "Before";
		else
			output = "After";
	}
	cout << output << "\n";
	return 0;
}