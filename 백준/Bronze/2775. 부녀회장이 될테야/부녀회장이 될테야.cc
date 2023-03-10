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
	for (int t = 0; t < T; t++)
	{
		unsigned int k, n;
		cin >> k >> n;
		int a[15][15];
		for (int i = 1; i <= 14; i++)
		{
			a[0][i] = i;
		}
		for (int i = 1; i <= 14; i++)
		{
			int sum = 0;
			for (int j = 1; j <= 14; j++)
			{
				sum += a[i - 1][j];
				a[i][j] = sum;
			}
			sum = 0;
		}
		cout << a[k][n] << endl;
	}
	return 0;
}
