#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>

using namespace std;

long long house[200010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, C;
	cin >> N >> C;

	for (int i = 0; i < N; i++)
		cin >> house[i];
	sort(house, house + N);
	
	long long max = house[N - 1] - house[0];
	long long min = 1;

	if (C == 2)
	{
		cout << max << endl;
		return 0;
	}
	else
	{
		long long mid = (min + max) / 2;
		while (min <= max)
		{
			mid = (min + max) / 2;
			//check 
			bool flag = false;
			if (mid * (C - 1) > max)
				flag = false;
			
			long long start = house[0];
			int tmp = 1;

			for (int i = 1; i < N; i++)
			{
				long long next = start + mid;
				if (next <= house[i])
				{
					start = house[i];
					tmp++;
				}
				if (tmp > C - 1)
				{
					flag = true;
					break;
				}
			}

			if (flag)
				min = mid + 1;
			else
				max = mid - 1;
		}
		cout << max << endl;
	}


	return 0;
}