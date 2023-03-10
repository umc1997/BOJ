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
	unsigned int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		unsigned int H, W, N;
		cin >> H >> W >> N;
		unsigned int a, b;
		a = N / H;
		b = N % H;
		if (b == 0)
			b += H;
		else
			a++;
		cout << b;
		if (a < 10)
			cout << 0;
		cout << a;
		cout << endl;
	}
	return 0;
}
