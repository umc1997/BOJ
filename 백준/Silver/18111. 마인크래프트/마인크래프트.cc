#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
using namespace std;
int height[510][510];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M, B;
	cin >> N >> M >> B;
	unsigned int sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> height[i][j];
			sum += height[i][j];
		}
	}
	sum += B;
	unsigned int limit = sum / (M * N);
	int maxHeight = -1;
	int minTime = INT_MAX;
	int sumOfTime = 0;
	for (int l = 0; l <= limit; l++)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (height[i][j] > l)
					sumOfTime += (height[i][j] - l) * 2;
				
				else if (height[i][j] < l)
					sumOfTime += l - height[i][j];
			}
		}
		if (sumOfTime < minTime)
		{
			minTime = sumOfTime;
			maxHeight = l;
		}
		else if (sumOfTime == minTime)
		{
			maxHeight = max(maxHeight, l);
		}
		sumOfTime = 0;
	}
	cout << minTime << " " << maxHeight << "\n";
	return 0;
}
