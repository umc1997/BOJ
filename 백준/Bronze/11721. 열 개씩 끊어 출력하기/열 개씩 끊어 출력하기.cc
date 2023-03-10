#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string line;
	cin >> line;
	for (int i = 0; i < line.size(); i++)
	{
		string tmp = "";
		tmp += line[i];
		cout << tmp;
		if (i % 10 == 9)
			cout << "\n";
	}
	return 0;
}