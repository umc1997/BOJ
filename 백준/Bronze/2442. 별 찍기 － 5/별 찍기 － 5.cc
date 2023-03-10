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
	for (int i = 0; i < N; i++)
	{
		string line = "";
		for (int j = 0; j < N - i - 1; j++)
			line += " ";
		for (int j = 0; j < i * 2 + 1; j++)
			line += "*";
		cout << line << "\n";
	}
	
	return 0;
}

