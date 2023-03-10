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

	for (int i = N; i >= 1; i--)
	{
		for (int j = 0; j < N - i; j++)
			cout << " ";
		
		for (int j = 0; j < i; j++)
			cout << "*";
		
		cout << "\n";
	}
	

	return 0;
}