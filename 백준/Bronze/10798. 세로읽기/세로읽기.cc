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
	string s[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (s[j].size() <= i)
				continue;
			cout << s[j][i];
		}
	}

}
