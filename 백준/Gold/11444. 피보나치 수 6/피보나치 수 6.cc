#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
#define D 1000000007
long long matrix[2][2] = { {1,1} ,{1,2} };
long long power[2][2];
long long tmp[2][2];
void powMatrix(long long p)
{
	if (p == 1)
	{
		copy(&matrix[0][0], &matrix[0][0] + 4, &power[0][0]);
	}
	else if (p % 2 == 1)
	{
		powMatrix(p / 2);
		//power * power * matrix
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				long long sum = 0;
				for (int k = 0; k < 2; k++)
				{
					sum += power[i][k] * power[k][j] % D;
				}
				tmp[i][j] = sum % D;
			}
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				long long sum = 0;
				for (int k = 0; k < 2; k++)
				{
					sum += tmp[i][k] * matrix[k][j] % D;
				}
				power[i][j] = sum % D;
			}
		}
	}
	else
	{
		powMatrix(p / 2);
		//power * power
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				long long sum = 0;
				for (int k = 0; k < 2; k++)
				{
					sum += power[i][k] * power[k][j] % D;
				}
				tmp[i][j] = sum % D;
			}
		}
		copy(&tmp[0][0], &tmp[0][0] + 4, &power[0][0]);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin >> n;
	if (n == 0 || n == 1)
	{
		cout << n << "\n";
		return 0;
	}
	powMatrix(n / 2);
	if (n % 2 == 0)
		cout << power[0][1] << "\n";
	else
		cout << power[1][1] << "\n";
	return 0;
}
