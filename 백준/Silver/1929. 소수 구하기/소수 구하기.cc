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
	
	unsigned int M, N;
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (isPrime(i))
		{
			cout << i << "\n";
		}
	}
	
	return 0;
}
