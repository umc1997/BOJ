#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>

using namespace std;
int deq[100010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		string cmd;
		cin >> cmd;
		unsigned int n;
		cin >> n;
		string arr;
		cin >> arr;
		string num = "";
		int cnt = 0;
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] == '[')
				continue;
			else if (arr[i] == ']' || arr[i] == ',')
			{
				if (num == "")
					continue;
				deq[cnt] = stoi(num);
				cnt++;
				num = "";
			}
			else
			{
				num += arr[i];
			}
		}
		int start = 0;
		int end = cnt;
		bool error = false;
		for (int i = 0; i < cmd.size(); i++)
		{
			if (cmd[i] == 'R')
			{
				int tmp;
				tmp = start;
				start = end;
				end = tmp;
			}
			else if (cmd[i] == 'D')
			{
				if (start == end)
				{
					error = true;
					cout << "error" << "\n";
					break;
				}
				else if (start > end)
				{
					start--;
				}
				else if (start < end)
				{
					start++;
				}
			}
		}
		if (error)
			continue;
		if (start == end)
		{
			cout << "[]";
		}
		else if (start > end)
		{
			cout << "[";
			for (int i = start - 1; i >= end; i--)
			{
				cout << deq[i];
				if (i == end)
					cout << "]";
				else
					cout << ",";
			}
		}
		else if (start < end)
		{
			cout << "[";
			for (int i = start; i < end; i++)
			{
				cout << deq[i];
				if (i == end - 1)
					cout << "]";
				else
					cout << ",";
			}
		}
		cout << "\n";
	}

	return 0;	
}
