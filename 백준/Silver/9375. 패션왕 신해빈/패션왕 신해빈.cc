#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_map>

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
		unsigned int N;
		cin >> N;
		unordered_map <string, int> clothes;
		for (int i = 0; i < N; i++)
		{
			string name, kind;
			cin >> name >> kind;
			if (clothes.count(kind))
			{
				clothes.at(kind)++;
			}
			else
			{
				clothes.insert(make_pair(kind, 1));
			}
		}
		int result = 1;
		for (auto& x: clothes)
		{
			result *= (x.second + 1);
		}
		result -= 1;
		cout << result << "\n";
	}
	return 0;
}
