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
		for (int j = N - i; j >= 1; j--)
			cout << " ";
		cout << "*";
		for (int j = 1; j <= i - 1; j++)
			cout << " *";
		cout << "\n";
	}
	return 0;
}

