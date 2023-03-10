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

	unsigned int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		string line = "";
		for (int j = 1; j <= N - i; j++)
			line += " ";
		for (int j = 1; j <= i; j++)
			line += "*";
		cout << line << "\n";
	}
	for (int i = N - 1; i >= 1; i--)
	{
		string line = "";
		for (int j = 1; j <= N - i; j++)
			line += " ";
		for (int j = 1; j <= i; j++)
			line += "*";
		cout << line << "\n";
	}
	return 0;
}

