#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int p[100010];
vector<int> tree[100010];
queue<int> q;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}

	q.push(1);
	while (!q.empty())
	{
		int current = q.front();
		q.pop();
		for (int i = 0; i < tree[current].size(); i++)
		{
			int next = tree[current][i];
			if (p[next] == 0)
			{
				p[next] = current;
				q.push(next);
			}
		}
	
	}
	for (int i = 2; i <= n; i++)
	{
		cout << p[i] << "\n";
	}
	return 0;
}
