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
	unsigned int T = 0;
	cin >> T;
	for (int t = 0; t < T;t++)
	{
		string s = "";
		cin >> s;
		cout << s[0] << s[s.size() - 1] << endl;
	}
	return 0;
}