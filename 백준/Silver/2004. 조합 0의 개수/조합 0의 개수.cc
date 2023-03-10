#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

long long f(long long N, long long d)
{
	long long result = 0;
	for (long long i = d; i <= N; i *= d)
		result += N / i;
	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N, K;
	cin >> N >> K;
	long long cnt_2 = 0;
	long long cnt_5 = 0;
	cnt_2 += f(N , 2);
	cnt_5 += f(N, 5);
	cnt_2 -= f(N - K, 2);
	cnt_5 -= f(N - K, 5);
	cnt_2 -= f(K, 2);
	cnt_5 -= f(K, 5);

	cout << min(cnt_2, cnt_5) << "\n";
	return 0;
}
