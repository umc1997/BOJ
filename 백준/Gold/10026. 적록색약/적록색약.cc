#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;
char arr[110][110];
bool visited[110][110];
unsigned int N;
void dfs(int x, int y, char color1, char color2) {
	visited[x][y] = true;

	if (x + 1 < N && (arr[x + 1][y] == color1 || arr[x + 1][y] == color2) && !visited[x + 1][y])
		dfs(x + 1, y, color1, color2);
	if (x - 1 >= 0 && (arr[x - 1][y] == color1 || arr[x - 1][y] == color2) && !visited[x - 1][y])
		dfs(x - 1, y, color1, color2);
	if (y + 1 < N && (arr[x][y + 1] == color1 || arr[x][y + 1] == color2) && !visited[x][y + 1])
		dfs(x, y + 1, color1, color2);
	if (y - 1 >= 0 && (arr[x][y - 1] == color1 || arr[x][y -1] == color2) && !visited[x][y - 1])
		dfs(x, y - 1, color1, color2);

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	memset(visited, false, sizeof(visited));
	memset(arr, 0, sizeof(arr));
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string line;
		cin >> line;
		for (int j = 0; j < N; j++)
			arr[i][j] = line[j];
	}
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visited[i][j])
			{
				dfs(i, j, arr[i][j], arr[i][j]);
				cnt1++;
			}
		}
	}
	memset(visited, false, sizeof(visited));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visited[i][j])
			{
				if (arr[i][j] == 'R' || arr[i][j] == 'G')
					dfs(i, j, 'R', 'G');
				else
					dfs(i, j, 'B', 'B');
				cnt2++;
			}
		}
	}
	cout << cnt1 << " " << cnt2 << "\n";
	return 0;
}