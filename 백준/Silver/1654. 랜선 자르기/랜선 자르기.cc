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
	unsigned int N, K;
	cin >> N >> K;
	long long sum = 0;
	long long max = 0;
	for (int i = 0; i < N; i++)
	{
		long long a;
		cin >> a;
		sum += a;
		length[i] = a;
	}
	long long left = 0;
	long long right = LLONG_MAX;
	while (left <= right)
	{
		long long mid = (left + right) / 2 ;
		int cnt = 0;
		for (int i = 0; i < N; i++)
		{
			cnt += length[i] / mid;
		}
		if (cnt < K)
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
