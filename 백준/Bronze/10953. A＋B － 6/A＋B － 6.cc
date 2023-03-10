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
	cin.get();
	for (int i = 0; i < N; i++)
	{
		char a, b;
		a = cin.get();
		cin.get();
		b = cin.get();
		cin.get();
		cout << (a - '0') + (b - '0') << "\n";
	}
	return 0;
}