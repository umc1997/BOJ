#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int cost[1010][3];
int DP[1010][3];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int R, G, B;
		cin >> R >> G >> B;
		cost[i][0] = R;
		cost[i][1] = G;
		cost[i][2] = B;
	}
	DP[1][0] = cost[1][0];
	DP[1][1] = cost[1][1];
	DP[1][2] = cost[1][2];
	for (int i = 2; i <= N; i++)
	{
		DP[i][0] = min(DP[i - 1][1], DP[i - 1][2]) + cost[i][0];
		DP[i][1] = min(DP[i - 1][0], DP[i - 1][2]) + cost[i][1];
		DP[i][2] = min(DP[i - 1][0], DP[i - 1][1]) + cost[i][2];
	}
	cout << min(min(DP[N][0], DP[N][1]), DP[N][2]) << "\n";
	
	return 0;
}