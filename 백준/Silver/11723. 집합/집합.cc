#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int M;
	cin >> M;
	bool s[21];
	for (int i = 1; i <= 20; i++)
		s[i] = false;
	for (int t = 0; t < M; t++)
	{
		string cmd;
		cin >> cmd;
		if(cmd == "add")
		{
			int a;
			cin >> a;
			s[a] = true;
		}
		else if (cmd == "remove")
		{
			int a;
			cin >> a;
			s[a] = false;
		}
		else if (cmd == "check")
		{
			int a;
			cin >> a;
			cout << s[a] << "\n";
		}
		else if (cmd == "toggle")
		{
			int a;
			cin >> a;
			s[a] = !s[a];
		}
		else if (cmd == "all")
		{
			for (int i = 1; i <= 20; i++)
				s[i] = true;
		}
		else if (cmd == "empty")
		{
			for (int i = 1; i <= 20; i++)
				s[i] = false;
		}
	}
	return 0;	
}
