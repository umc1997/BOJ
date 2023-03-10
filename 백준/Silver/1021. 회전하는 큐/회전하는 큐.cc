#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N >> M;
	int idx[60];
	for (int i = 1; i <= N; i++)
		idx[i] = i;
	
	int cnt = 0;
	int length = N;
	for (int i = 0; i < M; i++)
	{
		int target;
		cin >> target;
		int index = idx[target];
		int fromStart = index - 1;
		int fromEnd = length - index + 1;
		if (fromStart >= fromEnd)
		{
			cnt += fromEnd;
			for (int j = 1; j <= N; j++)
			{
				idx[j] += fromEnd;
				if (idx[j] > length)
					idx[j] -= length;
			}
		}
		else
		{
			cnt += fromStart;
			for (int j = 1; j <= N; j++)
			{
				idx[j] -= fromStart;
				if (idx[j] <= 0)
					idx[j] += length;
			}
		}
		for (int j = 1; j <= N; j++)
		{
			idx[j] -= 1;
		}
		length--;
	}
	cout << cnt << "\n";
	return 0;	
}
