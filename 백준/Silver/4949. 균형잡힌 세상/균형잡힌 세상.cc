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
	string s;
	do{
		bool isValid = true;
		stack<char> p;
		getline(cin, s);
		if (s == ".")
			break;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == '(' || s[j] == '[')
			{
				p.push(s[j]);
			}
			else if (s[j] == ')')
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
			else if (s[j] == ']')
			{
				if (p.empty())
				{
					isValid = false;
					break;
				}
				char t = p.top();
				if (t != '[')
				{
					isValid = false;
					break;
				}
				p.pop();
			}
			else
				continue;
		}
		if (!p.empty())
			isValid = false;
		if (isValid)
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	} while (s != ".");
	return 0;
}
