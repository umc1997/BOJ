#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int n, m;
int num[10];
int input[10];
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
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		num[cnt] = input[i];
		dfs(cnt + 1);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;

	vector<int> v;

	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	n = v.size();
	for (int i = 1; i <= n ; i++)
	{
		input[i] = v[i - 1];
	}
	
	dfs(0);

	return 0;
}
