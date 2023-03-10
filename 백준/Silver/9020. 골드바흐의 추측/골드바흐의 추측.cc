#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
bool isPrime(int a)
{
	if (a == 1)
		return false;
	if (a == 2 || a == 3)
		return true;
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	unsigned int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		unsigned int even;
		cin >> even;
		unsigned int firsthalf = even / 2;
		if (firsthalf % 2 == 0 && firsthalf != 2)
			firsthalf -= 1;
		unsigned int secondhalf = even - firsthalf;
		while (!(isPrime(firsthalf) && isPrime(secondhalf)))
		{
			firsthalf -= 2;
			secondhalf = even - firsthalf;
		}
		cout << firsthalf << " " << secondhalf << "\n";
	}
	return 0;
}
