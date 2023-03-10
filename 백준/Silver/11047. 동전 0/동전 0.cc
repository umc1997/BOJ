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

	unsigned int N, K, cnt = 0;
	cin >> N >> K;
	vector<unsigned int> coins(N);
	for (int i = 0; i < N; i++)
	{
		cin >> coins[i];
	}
	while (K != 0)
	{
		if (coins[--N] <= K)
		{
			cnt += K / coins[N];
			K %= coins[N];
		}
	}
	cout << cnt << "\n";
	return 0;
}
