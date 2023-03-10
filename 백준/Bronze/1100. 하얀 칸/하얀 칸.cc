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
	int result = 0;
	for (int i = 0; i < 8; i++)
	{
		string line;
		cin >> line;
		for (int j = 0; j < 8; j++)
		{
			if (((i + j) % 2 == 0) && (line[j] == 'F'))
				result++;
		}
	}
	cout << result << "\n";
	return 0;
}
