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
	queue<int> qu;
	for (int i = 0; i < N; i++)
	{
		string command;
		cin >> command;
		if (command == "push")
		{
			long i;
			cin >> i;
			qu.push(i);
		}
		else if (command == "pop")
		{
			if (qu.empty())
				cout << -1 << "\n";
			else
			{
				long i = qu.front();
				qu.pop();
				cout << i << "\n";
			}
		}
		else if (command == "size")
		{
			cout << qu.size() << "\n";
		}	
		else if (command == "empty")
		{
			cout << qu.empty() << "\n";
		}
		else if (command == "front")
		{
			if (qu.empty())
				cout << -1 << "\n";
			else
			{
				long i = qu.front();
				cout << i << "\n";
			}
		}
		else if (command == "back")
		{
			if (qu.empty())
				cout << -1 << "\n";
			else
			{
				long i = qu.back();
				cout << i << "\n";
			}
		}
	}
	return 0;
}
