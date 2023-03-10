#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <stack>

using namespace std;

stack<int> st;
bool visited[110] = { false };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int V, E;
	cin >> V >> E;
	vector<pair<int, int>> edge;
	visited[1] = true;
	for (int i = 0; i < E; i++)
	{
		int a, b;
		cin >> a >> b;
		edge.push_back(make_pair(a, b));
		if (a == 1)
			st.push(b);
		if (b == 1)
			st.push(a);
	}
	while (!st.empty())
	{
		int current = st.top();
		st.pop();
		if (visited[current])
			continue;
		visited[current] = true;
		int size = edge.size();
		for (int i = 0; i < size; i++)
		{
			if (edge[i].first == current)
				st.push(edge[i].second);
			if (edge[i].second == current)
				st.push(edge[i].first);
		}
	}
	unsigned int cnt = 0;
	for (int i = 1; i <= V; i++)
	{
		cnt += visited[i];
	}
	cnt--;
	cout << cnt << "\n";
	return 0;	
}
