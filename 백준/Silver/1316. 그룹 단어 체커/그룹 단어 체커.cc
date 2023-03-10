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
	
	unsigned int T;
	cin >> T;
	int cnt = 0;
	for (int i = 0; i < T; i++)
	{
		string in;
		cin >> in;
		vector<char> c;
		
		char current = '0';
		for (int i = 0; i< in.size(); i++)
		{
			if (current != in[i])
			{
				current = in[i];
				c.push_back(current);
			}
		}
		bool flag = false;
		for (int i = 0; i < c.size(); i++)
		{
			char current = c[i];
			for (int j = i + 1; j < c.size(); j++)
			{
				if (current == c[j])
				{
					flag = true;
				}
			}
			if (flag)
				break;
		}
		if (!flag)
			cnt++;
	}

	
	cout << cnt << "\n";
	return 0;
}
