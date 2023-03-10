#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>

using namespace std;
int DP[15];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int T;
	cin >> T;
	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;
	for (int i = 4; i <= 10; i++)
	{
		DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
	}
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		cout << DP[n] << "\n";
	}
	return 0;	
}
