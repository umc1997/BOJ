#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <stack>

using namespace std;
#define MAX 100001


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	int size = s.size();
	stack<char> st;
	for (int i = 0; i < size; i++)
	{
		char a = s[i];
		if (a >= 'A' && a <= 'Z')
			cout << a;
		else if (a == '*' || a == '/')
		{
			while (!st.empty() && (st.top() == '*' || st.top() == '/'))
			{
				cout << st.top();
				st.pop();
			}
			st.push(a);
		}
		else if (a == '+' || a == '-')
		{
			while (!st.empty() && (st.top() != '('))
			{
				cout << st.top();
				st.pop();
			}
			st.push(a);
		}
		else if (a == '(')
			st.push(a);
		else if (a == ')')
		{
			while (!st.empty() && (st.top() == '*' || st.top() != '('))
			{
				cout << st.top();
				st.pop();
			}
			st.pop();
		}
	}
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	cout << '\n';
	return 0;
}
