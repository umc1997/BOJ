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
	int N = 0;
	string a;
	stack<double> st;
	int op[26];
	cin >> N >> a;
	for (int i = 0; i < N; i++)
	{
		cin >> op[i];
	}
	int s = a.size();
	for (int i = 0; i < s; i++)
	{
		char current = a[i];
		if (current >= 'A' && current <= 'Z') st.push(op[current - 'A']);
		else {
			double a, b;
			a = st.top();
			st.pop();
			b = st.top();
			st.pop();
			if (current == '+') st.push(a + b);
			else if (current == '-') st.push(b - a);
			else if (current == '*') st.push(a * b);
			else if (current == '/') st.push(b / a);
		}
		
	}
	cout << fixed;
	cout.precision(2);
	cout << st.top() << '\n';
	cout.unsetf(ios::fixed);

	return 0;
}