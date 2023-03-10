#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int n, m;
int dp[1030][1030];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> dp[i][j];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			dp[i][j] += dp[i - 1][j];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			dp[i][j] += dp[i][j - 1];
	for (int t = 0; t < m; t++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		long long int res = dp[x2][y2] + dp[x1 - 1][y1 - 1] - dp[x1 - 1][y2] - dp[x2][y1 - 1];
		cout << res << "\n";
	}
	

	return 0;
}
