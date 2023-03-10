#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	stack<int> s;
	unsigned int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string command;
		cin >> command;
		if (command == "push")
		{
			int num;
			cin >> num;
			s.push(num);
		}
		else if (command == "pop")
		{
			if (s.empty())
				cout << -1 << "\n";
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if(command == "size")
		{
			cout << s.size() << "\n";
		}
		else if (command == "empty")
		{
			cout << s.empty() << "\n";
		}
		else if (command == "top")
		{
			if (s.empty())
				cout << -1 << "\n";
			else
				cout << s.top() << "\n";
		}
	}
	return 0;
}
