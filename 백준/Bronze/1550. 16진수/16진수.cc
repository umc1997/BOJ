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

	string N;
	cin >> N;
	unsigned int result = 0;
	for (int i = 0; i < N.size(); i++)
	{
		result *= 16;
		if (N[i] >= 'A' && N[i] <= 'F')
		{
			result += (N[i] - 'A' + 10);
		}
		else
		{
			result += (N[i] - '0');
		}
	}
	cout << result << "\n";
	return 0;
}

