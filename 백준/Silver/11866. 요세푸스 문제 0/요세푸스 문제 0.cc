#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, K;
	cin >> N >> K;
	queue<int> qu;
	for (int i = 1; i <= N; i++)
	{
		qu.push(i);
	}
	cout << "<";
	while (!qu.empty())
	{
		int a = qu.front();
		for (int i = 1; i < K; i++)
		{
			a = qu.front();
			qu.pop();
			qu.push(a);
		}
		a = qu.front();
		qu.pop();
		if (qu.empty())
			cout << a;
		else
			cout << a << ", ";
	}
	cout << ">";
	return 0;	
}
