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
	string input;
	string output = "";
	cin >> input;
	output += input[0];
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '-')
			output += input[i + 1];
	}
	cout << output << "\n";
	return 0;
}