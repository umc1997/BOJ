#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>

using namespace std;
long long f(long long a)
{
	long long result = 0;
	while (a != 0)
	{
		result += pow(a % 10, 2);
		a /= 10;
	}
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long N;
	cin >> N;
	bool isHappy;
	set<long long> s;
	s.insert(N);
	while (true)
	{
		if (N == 1)
		{
			isHappy = true;
			break;
		}
		N = f(N);
		if (s.count(N))
		{
			isHappy = false;
			break;
		}
		s.insert(N);
		
	}
	if (isHappy)
		cout << "HAPPY\n";
	else
		cout << "UNHAPPY\n";
	return 0;
}