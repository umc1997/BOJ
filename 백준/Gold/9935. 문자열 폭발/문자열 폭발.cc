#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	cin >> a >> b;
	string output = "";

	int size = a.size();
	for (int i = 0; i < size; i++)
	{
		output.push_back(a[i]);
		if (output.back() == b.back())
		{
			bool flag = true;
			for (int j = 0; j < b.size(); j++)
			{
				if (output[output.size() - j - 1] != b[b.size() - j - 1])
					flag = false;
			}
			if (flag)
				for (int j = 0; j < b.size(); j++)
					output.pop_back();
		}
	}
	if (output.empty())
		cout << "FRULA" << '\n';
	else
		cout << output << '\n';
}
