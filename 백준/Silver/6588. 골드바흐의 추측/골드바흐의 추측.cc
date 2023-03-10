#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

bool prime[1000010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	prime[1] = false;
	memset(prime, true, sizeof(prime));
	for (int i = 2; i < 1000010; i++) {
		if (prime[i]) {
			for (int j = i + i; j < 1000010; j += i) {
				prime[j] = false;
			}
		}
	}

	unsigned int even;
	cin >> even;
	while (even != 0)
	{
		unsigned int firsthalf = 3;
		unsigned int secondhalf = even - firsthalf;
		while (!(prime[firsthalf] && prime[secondhalf]))
		{
			firsthalf += 2;
			secondhalf = even - firsthalf;
		}
		cout << even << " = " << firsthalf << " + " << secondhalf << "\n";
		cin >> even;
	}
	return 0;
}