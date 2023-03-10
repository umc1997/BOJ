#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>
using namespace std;
int relation[105][105];
bool comp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N >> M;
	memset(relation, 0, sizeof(relation));
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		relation[a][b] = 1;
		relation[b][a] = 1;
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			for (int k = 1; k <= N; k++)
			{
				if (k == j)
					continue;
				else if (relation[j][i] != 0 && relation[i][k] != 0)
				{
					if (relation[j][k] == 0)
						relation[j][k] = relation[j][i] + relation[i][k];
					else
						relation[j][k] = min(relation[j][k], relation[j][i] + relation[i][k]);
				}
			}
		}
	}
	vector<pair<int, int>> v;
	for (int i = 1; i <= N; i++)
	{
		int sum = 0;
		for (int j = 1; j <= N; j++)
		{
			sum += relation[i][j];
		}
		v.push_back(make_pair(i, sum));
	}
	sort(v.begin(), v.end(), comp);
	cout << v[0].first << "\n";
	return 0;
}