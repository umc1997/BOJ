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
	
	for (int i = 0; i < 3; i++)
	{
		int one = 0;
		int zero = 0;
		char result;
		for (int j = 0; j < 4; j++)
		{
			int a;
			cin >> a;
			if (a == 1)
				one++;
			else
				zero++;
		}
		switch (zero)
		{
		case 0:
			result = 'E';
			break;
		case 1:
			result = 'A';
			break;
		case 2:
			result = 'B';
			break;
		case 3:
			result = 'C';
			break;
		case 4:
			result = 'D';
			break;
		}
		cout << result << "\n";
	}
	

	return 0;
}
