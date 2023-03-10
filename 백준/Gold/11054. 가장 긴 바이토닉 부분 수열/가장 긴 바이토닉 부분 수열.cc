#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int arr[1010];
int DP1[1010];
int DP2[1010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	DP1[1] = 1;
	for (int i = 2; i <= N; i++)
	{
		int cnt = 0;
		for (int j = 1; j < i; j++)
		{
			if ((arr[j] < arr[i]) && (cnt < DP1[j]))
			{
				cnt = DP1[j];
			}
		}
		DP1[i] = cnt + 1;
	}
	reverse(arr + 1, arr + N + 1);
	DP2[1] = 1;
	for (int i = 2; i <= N; i++)
	{
		int cnt = 0;
		for (int j = 1; j < i; j++)
		{
			if ((arr[j] < arr[i]) && (cnt < DP2[j]))
			{
				cnt = DP2[j];
			}
		}
		DP2[i] = cnt + 1;
	}
	int maxV = -1;
	for (int i = 1; i <= N; i++)
	{
		maxV = max(maxV, DP1[i] + DP2[N - i + 1] - 1);
	}
	cout << maxV << "\n";
}
