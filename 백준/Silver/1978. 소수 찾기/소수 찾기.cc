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
	int cnt = 0;
	for (int i = 0; i < T; i++)
	{
		unsigned int a;
		cin >> a;
		if (isPrime(a))
			cnt++;
	}
	cout << cnt << "\n";
	return 0;
}
