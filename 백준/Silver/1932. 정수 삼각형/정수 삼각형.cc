#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>

using namespace std;
int triangle[510][510];
int DP[510][510];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> triangle[i][j];
		}
	}
	DP[1][1] = triangle[1][1];
	for (int i = 2; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1)
			{
				DP[i][j] = triangle[i][j] + DP[i - 1][j];
			}
			else if (j == i)
			{
				DP[i][j] = triangle[i][j] + DP[i - 1][j - 1];
			}
			else
			{
				DP[i][j] = triangle[i][j] + max(DP[i - 1][j], DP[i - 1][j - 1]);
			}
		}
	}
	int result = -1;
	
	for (int i = 1; i <= N; i++)
	{
		result = max(result, DP[N][i]);
	}
	cout << result << "\n";
	
	return 0;
}
