#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#define MAX 1000010
using namespace std;
bool sieve[MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 2; i < sqrt(MAX); i++)
	{
		if (sieve[i] == false)
		{
			for (int j = 2; j * i < MAX; j++) {
				sieve[j * i] = true;
			}
		}
	}
	vector<long long> prime;
	for (int i = 2; i < MAX; i++)
	{
		if (!sieve[i])
			prime.push_back(i);
	}

	long long N;
	cin >> N;
	long long origin = N;
	long long result = 1;
	int size = prime.size();
	for (int i = 0; i < size; i++)
	{
		int cnt = 0;
		long long d = prime[i];
		if (N % d == 0)
		{
			cnt++;
			N /= d;
			while (N % d == 0)
			{
				cnt++;
				N /= d;
			}
			result *= (pow(d, cnt - 1) * (d - 1));
		}
	}
	if (N != 1)
		result *= (N - 1);
		
	cout << result << '\n';

	

}
