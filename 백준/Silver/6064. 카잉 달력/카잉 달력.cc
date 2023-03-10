#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;
unsigned int gcd(unsigned int a, unsigned int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
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
		unsigned int M, N, x, y;
		cin >> M >> N >> x >> y;
		int maximum = M * N / gcd(M, N);
		int year = -1;
		for (int i = 0; i <= (maximum - x) / M; i++)
		{
			int check = x + i * M;
			if (check % N == y || (N == y && check % N == 0))
			{
				year = check;
				break;
			}
		}
		cout << year << "\n";
	}
	
	return 0;
}