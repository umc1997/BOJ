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

	string s = "";
	string result = "";

	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 97)
			result += ('A' + s[i] - 'a');
		else
			result += ('a' + s[i] - 'A');
	}
	cout << result << endl;

	return 0;
}