#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
#define D 1000
unsigned int N;
int matrix[6][6];
int power[6][6];
int tmp[6][6];
void powMatrix(long long p)
{
	if (p == 1)
	{
		copy(&matrix[0][0], &matrix[0][0] + 36, &power[0][0]);
	}
	else if (p % 2 == 1)
	{
		powMatrix(p / 2);
		//power * power * matrix
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				int sum = 0;
				for (int k = 0; k < N; k++)
				{
					sum += power[i][k] * power[k][j] % D;
				}
				tmp[i][j] = sum % D;
			}
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				int sum = 0;
				for (int k = 0; k < N; k++)
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
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				int sum = 0;
				for (int k = 0; k < N; k++)
				{
					sum += power[i][k] * power[k][j] % D;
				}
				tmp[i][j] = sum % D;
			}
		}
		copy(&tmp[0][0], &tmp[0][0] + 36, &power[0][0]);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	long long B;
	cin >> B;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> matrix[i][j];
		}
	}
	powMatrix(B);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << power[i][j] % D << " ";
		}
		cout << "\n";
	}
	return 0;	
}
