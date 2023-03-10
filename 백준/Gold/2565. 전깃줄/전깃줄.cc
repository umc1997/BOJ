#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int DP[510];
int list[510];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	int p = 0;
	for (int i = 1; i <= 510; i++)
	{
		DP[i] = -1;
		list[i] = -1;
	}
	for (int i = 1; i <= N; i++)
	{
		int a;
		cin >> a;
		cin >> list[a];
		if (a > p)
			p = a;
	}
	DP[1] = 1;
	for (int i = 2; i <= p; i++)
	{
		int cnt = 0;
		if (list[i] == -1)
			continue;
		for (int j = 1; j < i; j++)
		{
			if (list[j] == -1)
				continue;
			if ((list[j] < list[i]) && (cnt < DP[j]))
			{
				cnt = DP[j];
			}
		}
		DP[i] = cnt + 1;
	}
	int result = -1;
	for (int i = 1; i <= p; i++)
	{
		result = max(result, DP[i]);
	}
	cout << N - result << "\n";
	return 0;	
}
