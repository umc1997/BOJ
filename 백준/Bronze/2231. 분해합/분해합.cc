#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

unsigned int func(unsigned int i)
{
	unsigned int result = i;
	unsigned int a = 1000000;
	while (a != 0)
	{
		result += (i / a);
		i %= a;
		a /= 10;
	}
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	unsigned int N;
	cin >> N;
	unsigned int result = 0;
	for (int i= 1; i <= N; i++)
	{
		if (func(i) == N)
		{
			result = i;
			break;
		}
	}
	cout << result << "\n";
	return 0;
}
