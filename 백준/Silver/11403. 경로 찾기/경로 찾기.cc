#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;
int arr[110][110];
int tmp[110][110];
int power[110][110];
unsigned int N;
void powMatrix(int p)
{
	if (p == 1)
	{
		copy(&arr[0][0], &arr[0][0] + 11000, &power[0][0]);
	}
	else if (p % 2 == 1)
	{
		powMatrix(p / 2);
		//power * power * arr
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				int sum = 0;
				for (int k = 0; k < N; k++)
				{
					sum += power[i][k] * power[k][j];
				}
				tmp[i][j] = sum;
			}
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				int sum = 0;
				for (int k = 0; k < N; k++)
				{
					sum += tmp[i][k] * arr[k][j];
				}
				power[i][j] = sum;
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
					sum += power[i][k] * power[k][j];
				}
				tmp[i][j] = sum;
			}
		}
		copy(&tmp[0][0], &tmp[0][0] + 11000, &power[0][0]);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	memset(arr, 0, sizeof(arr));
	memset(tmp, 0, sizeof(tmp));
	memset(power, 0, sizeof(power));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
			if (i == j)
				arr[i][j] = 1;
		}
	}
	powMatrix(N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j && power[i][j] == 1)
				cout << 0 << " ";
			else if (i == j && power[i][j] != 1)
				cout << 1 << " ";
			else
			{
				if (power[i][j])
					cout << 1 << " ";
				else
					cout << 0 << " ";
			}
				
		}
		cout << "\n";
	}
	return 0;
}