#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>

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
	while (T--)
	{
		unsigned int N;
		cin >> N;
		unsigned int arr[110] = { 0, };
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		long long sum = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = i + 1; j < N; j++)
			{
				sum += gcd(arr[i], arr[j]);
			}
		}
		cout << sum << "\n";
	}
	return 0;
}