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
	
	unsigned int in;
	unsigned int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> in;
		sum += in;
	}
	cout << sum / 60 << "\n" << sum % 60 << "\n";
	return 0;
}