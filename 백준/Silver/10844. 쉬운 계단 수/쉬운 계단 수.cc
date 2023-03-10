#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>

using namespace std;
int DP[110][10];
#define D 1000000000
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 0; i < 10; i++)
		DP[1][i] = 1;
	for (int i = 2; i <= N; i++)
	{
		DP[i][0] = DP[i - 1][1];
		DP[i][9] = DP[i - 1][8];
		for (int j = 1; j <= 8; j++)
		{
			DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % D;
		}
	}
	int result = 0;
	for (int i = 1; i < 10; i++)
	{
		result += DP[N][i];
		result %= D;
	}
	cout << result << "\n";
	return 0;
}
