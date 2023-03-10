#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int numbers[110];
int signs[4] = { 0, };
int maxValue = -1000000000;
int minValue = 1000000000;
unsigned int N;

void dfs(int cnt, int sum)
{
	if (cnt == N)
	{
		maxValue = max(sum, maxValue);
		minValue = min(sum, minValue);
		return;
	}
	if (signs[0] != 0)
	{
		signs[0]--;
		dfs(cnt + 1, sum + numbers[cnt]);
		signs[0]++;
	}
	if (signs[1] != 0)
	{
		signs[1]--;
		dfs(cnt + 1, sum - numbers[cnt]);
		signs[1]++;
	}
	if (signs[2] != 0)
	{
		signs[2]--;
		dfs(cnt + 1, sum * numbers[cnt]);
		signs[2]++;
	}
	if (signs[3] != 0)
	{
		signs[3]--;
		dfs(cnt + 1, sum / numbers[cnt]);
		signs[3]++;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> numbers[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> signs[i];
	}

	dfs(1, numbers[0]);

	cout << maxValue << "\n";
	cout << minValue << "\n";
	
	return 0;
}
