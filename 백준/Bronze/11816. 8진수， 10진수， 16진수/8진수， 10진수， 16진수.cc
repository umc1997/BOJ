#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin >> s;
	int result = 0;
	if (s[0] == '0')
	{
		if (s.size() == 1) {
			result = 0;
		}
		else {
			if (s[1] == 'x')
			{
				s = s.substr(2);
				//hex
				for (int i = 0; i < s.size(); i++)
				{
					result *= 16;
					char a = s[i];
					if (a >= 'a' && a <= 'f')
					{
						result += a - 'a' + 10;
					}
					else {
						result += a - '0';
					}
				}
			}
			else 
			{
				//oct
				s = s.substr(1);
				for (int i = 0; i < s.size(); i++)
				{
					result *= 8;
					char a = s[i];
					result += a - '0';
				}
			}
		}
	}
	else 
	{
		for (int i = 0; i < s.size(); i++)
		{
			result *= 10;
			char a = s[i];
			result += a - '0';
		}
	}
	cout << result << '\n';

	return 0;
}