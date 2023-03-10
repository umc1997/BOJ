#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int graph[1010][1010] = {};
bool visited[1010] = { 0, };

int main()
{
	int N, M, V;
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int m, n;
		cin >> m >> n;
		graph[m - 1][n - 1] = 1;
		graph[n - 1][m - 1] = 1;
	}
	//dfs
	stack<int> dfs;
	dfs.push(V);
	while (true)
	{
		if (dfs.empty())
		{
			break;
		}
		int a = dfs.top();
		if (visited[a - 1] == false)
		{
			cout << a << " ";
		}
		else
		{
			dfs.pop();
			continue;
		}
		visited[a - 1] = true;
		dfs.pop();
		for (int i = N - 1; i >= 0; i--)
		{
			if (graph[a - 1][i])
			{
				dfs.push(i + 1);
			}
		}
	
	}

	for (int i = 0; i < N; i++)
	{
		visited[i] = false;
	}
	cout << endl;
	//bfs
	queue<int> bfs;
	bfs.push(V);
	while (true)
	{
		if (bfs.empty())
		{
			break;
		}
		int a = bfs.front();
		if (visited[a - 1] == false)
		{
			cout << a << " ";
		}
		else
		{
			bfs.pop();
			continue;
		}
		visited[a - 1] = true;
		bfs.pop();
		for (int i = 0; i < N; i++)
		{
			if (graph[a - 1][i])
			{
				bfs.push(i + 1);
			}
		}
	}
	cout << endl;
}