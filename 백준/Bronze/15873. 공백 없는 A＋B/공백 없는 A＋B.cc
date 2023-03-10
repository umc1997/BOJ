#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	int result = 0;
	cin >> N;
	if (N > 1000)
		result = 20;
	else if (N < 100)
		result = N / 10 + N % 10;
	else if (N <= 109)
		result = 10 + N % 10;
	else if (N == 110)
		result = 11;
	else
		result = N / 100 + 10;
	cout << result << "\n";

	return 0;
}

