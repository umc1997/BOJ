#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
using namespace std;

long long length[1000010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N >> M;
	long long max = 0;
	for (int i = 0; i < N; i++)
		cin >> length[i];
	long long left = 0;
	long long right = LLONG_MAX;
	while (left <= right)
	{
		long long mid = (left + right) / 2;
		long long cnt = 0;
		for (int i = 0; i < N; i++)
		{
			if (length[i] > mid)
			{
				cnt += length[i] - mid;
			}
		}
		if (cnt < M)
			right = mid - 1;
		else
		{
			left = mid + 1;
			if (mid > max)
				max = mid;
		}
	}
	cout << max << "\n";
	return 0;
}
