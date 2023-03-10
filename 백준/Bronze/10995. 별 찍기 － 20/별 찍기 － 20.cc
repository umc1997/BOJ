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
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		if (i % 2 == 0)
			cout << " ";
		cout << "*";
		for (int j = 2; j <= N; j++)
		{
			cout << " *";
		}
		cout << "\n";
	}
	return 0;
}

