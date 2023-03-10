#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

unsigned int f(unsigned int N, unsigned int d)
{
	unsigned int result = 0;
	while (N % d == 0)
	{
		N /= d;
		result++;
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
	unsigned int cnt_2 = 0;
	unsigned int cnt_5 = 0;
	for (int i = 1; i <= N; i++)
	{
		cnt_2 += f(i, 2);
		cnt_5 += f(i, 5);
	}
	cout << min(cnt_2, cnt_5) << "\n";
	return 0;
}
