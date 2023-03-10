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
	unsigned int N;
	cin >> N;
	stack<int> st;
	string output = "";
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		if (a > max)
		{
			for (int j = max + 1; j <= a; j++)
			{
				output += "+\n";
				st.push(j);
			}
			max = a;
			output += "-\n";
			st.pop();
		}
		else if (a == st.top())
		{
			output += "-\n";
			st.pop();
		}
		else if (st.empty())
		{
			output = "NO";
			break;
		}
		else
		{
			output = "NO";
			break;
		}
	}
	cout << output << "\n";
	return 0;
}
