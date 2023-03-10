#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int T;
	cin >> T;
	int tri[46];
	bool can[1001] = { false, };
	for (int i = 1; i <= 45; i++)
	{
		tri[i] = i * (i + 1) / 2;
	}
	for (int i = 1; i <= 45; i++)
	{
		for (int j = 1; j <= 45; j++)
		{
			for (int k = 1; k <= 45; k++)
			{
				int a = tri[i] + tri[j] + tri[k];
				if (a > 1000)
					continue;
				can[a] = true;
			}
		}
	}
	while (T--)
	{
		int a;
		cin >> a;
		cout << can[a] << "\n";
	}
	return 0;
}