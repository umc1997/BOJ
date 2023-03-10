#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string input;
	map<string, int, less<string>> treeMap;
	int maxNum = 0;
	while (true)
	{
		getline(cin, input);
		if (cin.eof()) break;
		maxNum++;
		if (treeMap.find(input) != treeMap.end())
		{
			treeMap[input] = treeMap[input] + 1;
		}
		else {
			treeMap[input] = 1;
		}
	}
	cout << fixed;
	cout.precision(4);
	for (auto it : treeMap)
		cout << it.first << " " << (double) it.second / maxNum * 100 << "\n";
	return 0;
}