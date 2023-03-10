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
	while (true)
	{
		getline(cin,line);
		if (cin.eof()) break;
		cout << line << "\n";
	}

	return 0;
}