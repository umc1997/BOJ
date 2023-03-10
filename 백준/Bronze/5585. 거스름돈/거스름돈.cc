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
	int in;
	cin >> in;
	in = 1000 - in;
	int result = 0;
	result += in / 500;
	in %= 500;
	result += in / 100;
	in %= 100;
	result += in / 50;
	in %= 50;
	result += in / 10;
	in %= 10;
	result += in / 5;
	in %= 5;
	result += in;
	cout << result << "\n";
	return 0;
}
