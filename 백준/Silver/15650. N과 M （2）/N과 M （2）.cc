#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int n, m;
bool visited[10] = { false, };
int num[10];
void dfs(int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m - 1; i++)
		{
			if (num[i] > num[i + 1])
				return;
		}
		for (int i = 0; i < m; i++)
			cout << num[i] << " ";
		cout << "\n";
	}
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			num[cnt] = i;
			dfs(cnt + 1);
			visited[i] = false;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;

	dfs(0);
	
	return 0;
}
