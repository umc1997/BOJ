#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>
#include <set>
#include <unordered_map>
using namespace std;

bool isPrime(unsigned int a)
{
	if (a == 0 || a == 1)
		return false;
	if (a == 2 || a == 3)
		return true;
	for (unsigned int i = 2; i <= sqrt(a); i++)
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

	// input & assignment
	int T; 
	cin >> T;
	while (T--) {
		unsigned int N;
		cin >> N;
		unsigned int result = N;
		while (!isPrime(result)) {
			result++;
		}
		// output
		cout << result << '\n';
	}
	return 0;
}