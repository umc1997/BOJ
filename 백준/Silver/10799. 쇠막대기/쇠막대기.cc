#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main() 
{
	stack<char> stack;
	int result = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			stack.push('(');
		}
		else
		{
			stack.pop();
			if (s[i - 1] == '(')
			{
				result += stack.size();
			}
			else
			{
				result++;
			}
		}
	}

	cout << result << endl;

	return 0;
}
