#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_map>
#define MAX 1000000

using namespace std;

int DP[MAX + 1] = { -1, };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int N;
	cin >> N;
	DP[1] = 0;
	for (int i = 2; i <= MAX; i++)
	{
		unsigned int a, b, c;
		a = i - 1;
		b = i - 1;
		c = i - 1;
		if (i % 3 == 0)
			a = i / 3;
		if (i % 2 == 0)
			b = i / 2;
		DP[i] = min(min(DP[a], DP[b]), DP[c]) + 1;
	}
	cout << DP[N] << "\n";
	return 0;
}
