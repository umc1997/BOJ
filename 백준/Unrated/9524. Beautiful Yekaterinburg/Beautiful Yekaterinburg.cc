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
	string s = "1723";
	int a;
	cin >> a;
	cout << s[a - 1] << "\n";
	return 0;
}