#include <iostream>

using namespace std;
#define mod 1000000000
int main() {

	int N, K;
	int Dp[210][210] = {};

	cin >> N >> K;
	for (int i = 0; i <= N; i++)
		Dp[1][i] = 1;

	for (int i = 0; i <= N; i++)
		Dp[2][i] = i + 1;

	for (int i = 3; i <= K; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				Dp[i][j] = (Dp[i][j] + Dp[i-1][j-k]) % mod;
			}
		}
	}
	cout << Dp[K][N] % mod << endl;
}
