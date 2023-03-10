#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// input & assignment
	int T;
	cin >> T;
	// solution
	while (T--)
	{
		int N;
		cin >> N;
		vector<int> stocks = {};
		long long result = 0;
		for (int i = 0; i < N; i++) {
			int input;
			cin >> input;
			stocks.push_back(input);
		}
		// find max
		reverse(stocks.begin(), stocks.end());
		int max = stocks[0];
		for (int i = 1; i < N; i++)
		{
			int current = stocks[i];
			if (current >= max) max = current;
			else {
				result += max - current;
			}
		}
		// output
		cout << result << endl;
	}

	return 0;
}