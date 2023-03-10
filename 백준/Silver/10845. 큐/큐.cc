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
	unsigned int N;
	cin >> N;
	queue<int> que;
	for (int i = 0; i < N; i++)
	{
		string command;
		cin >> command;
		if(command == "push")
		{
			int a;
			cin >> a;
			que.push(a);
		}
		else if (command == "pop")
		{
			if (que.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			int a;
			a = que.front();
			cout << a << "\n";
			que.pop();
		}
		else if (command == "size")
		{
			cout << que.size() << "\n";
		}
		else if (command == "empty")
		{
			cout << que.empty() << "\n";
		}
		else if (command == "front")
		{
			if (que.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			int a;
			a = que.front();
			cout << a << "\n";
		}
		else if (command == "back")
		{
			if (que.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			int a;
			a = que.back();
			cout << a << "\n";
		}
	}
	return 0;	
}
