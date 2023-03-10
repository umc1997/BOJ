#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;
unsigned int r, c;
long long cnt = 0;

void f(int x, int y, int size)
{
	if (size == 1)
	{
		if (x == r && y == c)
			return;
		else
			cnt++;
	}
	else
	{
		size /= 2;
		if (x + size > r)
		{
			if (y + size > c)
			{
				f(x, y, size);
			}
			else {
				f(x, y + size, size);
				cnt += size * size;
			}
		}
		else {
			if (y + size > c)
			{
				f(x + size, y, size);
				cnt += size * size * 2;
			}
			else {
				f(x + size, y + size, size);
				cnt += size * size * 3;
			}
		}
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N >> r >> c;
	unsigned int size = pow(2, N);
	f(0, 0, size);
	cout << cnt << "\n";
	return 0;
}
