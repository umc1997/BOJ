#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long N, K;
	cin >> N >> K;
	long long left = 1;
	long long right = K;
	long long answer;
	while (left <= right)
	{
		long long mid = (left + right) / 2;
		long long sum = 0;
		for (int i = 1; i <= N; i++)
		{
			sum += min(N, mid / i);
		}
		if (sum >= K)
		{
			right = mid - 1;
			answer = mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	cout << answer << "\n";
	return 0;	
}
