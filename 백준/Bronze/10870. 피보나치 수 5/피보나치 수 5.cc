#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int fibonacci(int n)
{
	if (n == 0)
		return 0;
	int pp, p = 0;
	int c = 1;
	for (int i = 1; i < n; i++)
	{
		pp = p;
		p = c;
		c = p + pp;
	}
	return c;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	unsigned int N;
	cin >> N;
	cout << fibonacci(N) << "\n";
	return 0;
}
