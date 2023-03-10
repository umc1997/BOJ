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
	
	unsigned int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		unsigned int a;
		cin >> a;
		sum += a;
	}
	cout << sum << "\n";
}

