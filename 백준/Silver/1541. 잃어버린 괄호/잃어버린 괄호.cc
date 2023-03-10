#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int min(string line);
int add(string line);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string line;
	cin >> line;
	cout << min(line) << "\n";
	return 0;
}

int min(string line) {
	string a = "";
	vector<string> s;
	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] == '-')
		{
			s.push_back(a);
			a = "";
		}
		else
		{
			a += line[i];
		}
	}
	s.push_back(a);
	int result = add(s[0]);
	for (int i = 1; i < s.size(); i++)
	{
		result -= add(s[i]);
	}
	return result;
}
int add(string line) {
	
	int num = 0;
	int result = 0;
	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] == '+')
		{
			result += num;
			num = 0;
		}
		else
		{
			num *= 10;
			num += line[i] - '0';
		}
	}
	result += num;
	return result;
}