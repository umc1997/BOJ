#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int input[3];
int maxDp[3];
int minDp[3];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> input[j];
		}
		if (i == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				maxDp[j] = input[j];
				minDp[j] = input[j];
			}
		}
		else
		{
			int a = maxDp[0];
			int b = maxDp[1];
			int c = maxDp[2];
			maxDp[0] = max({ a + input[0], b + input[0] });
			maxDp[1] = max({ a + input[1], b + input[1], c + input[1] });
			maxDp[2] = max({ b + input[2], c + input[2] });

			a = minDp[0];
			b = minDp[1];
			c = minDp[2];
			minDp[0] = min({ a + input[0], b + input[0] });
			minDp[1] = min({ a + input[1], b + input[1], c + input[1] });
			minDp[2] = min({ b + input[2], c + input[2] });
		}
	}

	cout << *max_element(maxDp, maxDp + 3) << ' ' << *min_element(minDp, minDp + 3) << '\n';

	
	return 0;
}
