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
	int correct = 0;
	int sum = 0;
	while (T--)
	{
		bool in;
		cin >> in;
		if (in)
		{
			correct++;
			sum += correct;
		}
		else
			correct = 0;
	}
	cout << sum << "\n";
	return 0;
}