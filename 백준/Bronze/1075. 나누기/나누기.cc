#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, F;
	cin >> N >> F;
	N = N / 100 * 100;
	unsigned int tmp = N / F * F;
	if (tmp < N)
		tmp += F;
	tmp -= N;
	string output = "";
	output += (tmp / 10 + '0');
	output += (tmp % 10 + '0');
	cout << output << "\n";
	return 0;
}