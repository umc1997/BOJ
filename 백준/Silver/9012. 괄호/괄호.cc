#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int K;
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		bool isValid = true;
		stack<char> p;
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == '(')
				p.push('(');
			else
			{
				if (p.empty())
				{
					isValid = false;
					break;
				}
				char t = p.top();
				if (t != '(')
				{
					isValid = false;
					break;
				}
				p.pop();
			}
		}
		if (!p.empty())
			isValid = false;
		if (isValid)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}
