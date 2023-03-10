#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define D 10007
int C[1001][1001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int N, K;
	cin >> N >> K;
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
				C[i][j] = 1;
			else
				C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % D;
		}
	}
	cout << C[N][K] << "\n";
	return 0;
}
