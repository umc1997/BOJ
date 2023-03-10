#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;

int DP[50010] = { 50000, };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		DP[i] = 50000;
	}
	for (int i = 1; i * i <= N; i++)
	{
		DP[i * i] = 1;
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i / 2; j++)
		{
			if (DP[i] > DP[j] + DP[i - j])
				DP[i] = DP[j] + DP[i - j];
		}
	}
	cout << DP[N] << "\n";
	return 0;
}