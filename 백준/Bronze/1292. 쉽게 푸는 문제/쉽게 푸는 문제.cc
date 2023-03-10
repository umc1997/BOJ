#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;
int arr[1010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 1;
	int i = 1;
	while (cnt < 1010)
	{
		for (int k = 1; k <= i; k++)
		{
			arr[cnt] = i;
			cnt++;
			if (cnt > 1010)
				break;
		}
		i++;
	}
	int a, b;
	cin >> a >> b;
	long long sum = 0;
	for (int i = a; i <= b; i++)
	{
		sum += arr[i];
	}
	cout << sum << "\n";
	return 0;
}