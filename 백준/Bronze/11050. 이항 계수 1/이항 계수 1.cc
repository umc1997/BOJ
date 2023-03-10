#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
unsigned int factorial(unsigned int n)
{
	unsigned int result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}
unsigned int C(unsigned int N, unsigned int K)
{
	return factorial(N) / (factorial(N - K) * factorial(K));
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int N, K;
	cin >> N >> K;
	cout << C(N, K) << "\n";
	return 0;
}
