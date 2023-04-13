#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>
#include <set>
#include <unordered_map>
using namespace std;

int input[110];
bool visited[110];
bool tmp[110];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> input[i];
	memset(visited, false, sizeof(visited));
	memset(tmp, false, sizeof(tmp));
	for (int i = 1; i <= N; i++)
	{
		if (visited[i]) continue;
		tmp[i] = true;
		int cur = input[i];
		while (!tmp[cur]) {
			tmp[cur] = true;
			cur = input[cur];
		}
		while (!visited[cur]) {
			visited[cur] = true;
			cur = input[cur];
		}
		memset(tmp, false, sizeof(tmp));
	}
	// output
	int result = 0;
	for (int i = 1; i <= N; i++)
	{
		if (visited[i]) result++;
	}
	cout << result << '\n';
	for (int i = 1; i <= N; i++)
	{
		if (visited[i]) cout << i << '\n';
	}
	return 0;
}