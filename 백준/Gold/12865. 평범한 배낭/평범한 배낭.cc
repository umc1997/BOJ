#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int things[110][2];
int DP[110][100010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
	{
		cin >> things[i][0];
		cin >> things[i][1];
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j <= K; j++)
		{
			if (j < things[i][0])
				DP[i][j] = DP[i - 1][j];
			else
			{
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - things[i][0]] + things[i][1]);
			}
		}
	}

	cout << DP[N][K] << "\n";

}
