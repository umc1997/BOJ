#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int T;
	cin >> T;
	
	for (int t = 0; t < T; t++)
	{
		multiset<int> s;
		unsigned int k;
		cin >> k;
		for (int i = 0; i < k; i++)
		{
			string cmd;
			cin >> cmd;
			if (cmd == "I")
			{
				int num;
				cin >> num;
				s.insert(num);
			}
			else if (cmd == "D")
			{
				int num;
				cin >> num;
				if (s.empty())
					continue;
				if (num == -1)
					s.erase(s.begin());
				else if (num == 1)
				{
					auto it = s.end();
					it--;
					s.erase(it);
				}
			}
		}
		if (s.empty())
			cout << "EMPTY" << "\n";
		else
		{
			auto it = s.end();
			it--;
			cout << *it << " " << *s.begin() << "\n";
		}
	}
	return 0;	
}
