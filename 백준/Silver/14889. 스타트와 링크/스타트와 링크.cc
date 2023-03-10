#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int S[25][25];
bool visited[25] = { 0, };
int minValue = 1000000000;
int start[25];
int link[25];
unsigned int N;

void dfs(int cur, int cnt)
{
	if (cnt == N / 2)
	{
		int startT = 0;
		int linkT = 0;
		int p = 0;
		for (int i = 0; i < N; i++)
		{
			if (!visited[i])
			{
				link[p] = i;
				p++;
			}
		}
		for (int i = 0; i < N / 2; i++)
		{
			for (int j = 0; j < N/2; j++)
			{
				if (i != j)
				{
					startT += S[start[i]][start[j]];
					linkT += S[link[i]][link[j]];
				}
			}
		}
		minValue = min(minValue, abs(startT - linkT));
		return;
	}
	for (int i = cur; i < N; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			start[cnt] = i;
			dfs(i, cnt + 1);
			visited[i] = false;
		}
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
		for (int j = 0; j < N; j++)
		{
			cin >> S[i][j];
		}
	}
	dfs(0, 0);
	
	cout << minValue << "\n";
	return 0;
}
