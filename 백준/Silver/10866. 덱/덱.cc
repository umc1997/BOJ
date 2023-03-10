#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	deque<int> dq;
	for (int t = 0; t < N; t++)
	{
		string command;
		cin >> command;
		if (command == "push_front")
		{ 
			int a;
			cin >> a;
			dq.push_front(a);
		}
		else if (command == "push_back")
		{
			int a;
			cin >> a;
			dq.push_back(a);
		}
		else if (command == "pop_front")
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			int a = dq.front();	
			dq.pop_front();
			cout << a << "\n";
		}
		else if (command == "pop_back")
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			int a = dq.back();
			dq.pop_back();
			cout << a << "\n";
		}
		else if (command == "size")
		{
			cout << dq.size() << "\n";
		}
		else if (command == "empty")
		{
			cout << dq.empty() << "\n";
		}
		else if (command == "front")
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			cout << dq.front() << "\n";
		}
		else if (command == "back")
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			cout << dq.back() << "\n";
		}
	}
	return 0;	
}
