#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
int arr[110];
int dis[110];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n + m;++i)
	{
		int x, y;
		cin >> x >> y;
		arr[x] = y;
	}

	queue<int> q;
	memset(dis, -1, sizeof(dis));
	q.push(1);
	dis[1] = 0;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 1;i <= 6;i++)
		{
			int xx = x + i;
			if (xx > 100)
				continue;
			if (arr[xx] != 0)
				xx = arr[xx];
			if (dis[xx] == -1)
			{
				dis[xx] = dis[x] + 1;
				q.push(xx);
			}
		}
	}
	cout << dis[100] << "\n";

}