#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int T;
	cin >> T;
	long long DP[110];
	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 1;
	DP[4] = 2;
	DP[5] = 2;
	for (int t = 0; t < T; t++)
	{
		unsigned int N;
		cin >> N;
		for (int i = 6; i <= N; i++)
		{
			DP[i] = DP[i - 1] + DP[i - 5];
		}
		cout << DP[N] << "\n";
	}
	
	
	return 0;
}