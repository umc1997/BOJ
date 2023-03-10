#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>

using namespace std;
int list[1010];
int DP[1010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> list[i];
	}
	DP[1] = 1;

	for (int i = 2; i <= N; i++)
	{
		int cnt = 0;
		for (int j = 1; j < i; j++)
		{
			if ((list[j] < list[i]) && (cnt < DP[j]))
			{
				cnt = DP[j];
			}
		}
		DP[i] = cnt + 1;
	}
	int result = -1;
	for (int i = 1; i <= N; i++)
	{
		result = max(DP[i], result);
	}
	cout << result << "\n";
	return 0;
}
