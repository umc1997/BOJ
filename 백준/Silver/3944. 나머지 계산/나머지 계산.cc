#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T = 0;
	cin >> T;
	while (T--)
	{
		int dig = 0;
		string input;
		cin >> dig >> input;
		int result = 0;
		for (int i = 0; i < input.size(); i++)
		{
			result += (input[i] - '0');
			result %= (dig - 1);
		}
		cout << result << "\n";
	}
}
