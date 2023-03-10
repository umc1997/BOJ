#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define D 15746
using namespace std;
int DP[1000010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;

	DP[1] = 1;
	DP[2] = 2;
	for (int i = 3; i <= N; i++)
	{
		DP[i] = (DP[i - 2] + DP[i - 1]) % D;
	}
	cout << DP[N] % D << "\n";
	return 0;
}
