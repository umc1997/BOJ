#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>

using namespace std;

float dis(int ax, int ay, int bx, int by)
{
	return sqrt(pow((ax - bx), 2) + pow((ay - by), 2));
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int W, H, X, Y, P;
	cin >> W >> H >> X >> Y >> P;
	int result = 0;
	int R = H / 2;
	for (int i = 0; i < P; i++)
	{
		int x, y;
		cin >> x >> y;
		bool flag1 = false;
		bool flag2 = false;
		bool flag3 = false;
		if (x >= X && x <= X + W && y >= Y && y <= Y + H)
			flag1 = true;

		if (x <= X && y >= Y && y <= Y + H && dis(x, y, X, Y + R) <= R)
			flag2 = true;

		if (x >= X + W && y >= Y && y <= Y + H && dis(x, y, X + W, Y + R) <= R)
			flag2 = true;

		if (flag1 || flag2 || flag3) result++;
	}
	cout << result << '\n';

	return 0;
}