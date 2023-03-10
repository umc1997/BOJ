#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>

using namespace std;
int wine[10010];
int DP[10010][2];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> wine[i];
	}
	DP[1][0] = wine[1];
	DP[1][1] = 0;
	DP[2][0] = wine[1] + wine[2];
	DP[2][1] = wine[1];
	for (int i = 1; i <= N; i++)
	{
		DP[i][0] = wine[i] + max(DP[i - 1][1], DP[i - 2][1] + wine[i - 1]);
		DP[i][1] = max(DP[i - 1][0], DP[i - 1][1]);
	}
	cout << max(DP[N][0], DP[N][1]) << "\n";
	return 0;
}
