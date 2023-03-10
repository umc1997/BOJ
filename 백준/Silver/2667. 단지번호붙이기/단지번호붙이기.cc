#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;
bool arr[30][30];
bool visited[30][30];
unsigned int N;
unsigned int num = 1;
void dfs(int x, int y) {
	visited[x][y] = true;
	if (x + 1 < N && arr[x + 1][y] && !visited[x + 1][y])
	{
		dfs(x + 1, y);
		num++;
	}
	if (x - 1 >= 0 && arr[x - 1][y] && !visited[x - 1][y])
	{
		dfs(x - 1, y);
		num++;
	}
	if (y + 1 < N && arr[x][y + 1] && !visited[x][y + 1])
	{
		dfs(x, y + 1);
		num++;
	}
	if (y - 1 >= 0 && arr[x][y - 1] && !visited[x][y - 1])
	{
		dfs(x, y - 1);
		num++;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int cnt = 0;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = false;
			visited[i][j] = false;
		}
	}
	for (int i = 0; i < N; i++)
	{
		string line;
		cin >> line;
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = line[j] - '0';
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] && !visited[i][j])
			{
				dfs(i, j);
				v.push_back(num);
				num = 1;
				cnt++;
			}
		}
	}
	sort(v.begin(), v.end());
	cout << cnt << "\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
	return 0;
}