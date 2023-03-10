#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int HW(unsigned int a)
{
	int result = 0;
	while (a != 0)
	{
		if(a & 1) result++;
		a >>= 1;
	}
	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int N, K = 0;

	cin >> N >> K;
	
	int tmp = N;
	int res = HW(tmp);

	while (res > K)
	{
		tmp++;
		res = HW(tmp);
	}
	cout << tmp - N << endl;

	return 0;
}