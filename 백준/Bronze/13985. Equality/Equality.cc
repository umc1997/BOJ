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
	string s;
	getline(cin, s);
	char a, b, c;
	a = s[0];
	b = s[4];
	c = s[8];
	if ((a - '0') + (b - '0') == (c - '0'))
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
	return 0;
}