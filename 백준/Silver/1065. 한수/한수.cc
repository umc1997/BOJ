#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_set>
using namespace std;

bool isHansu(int a)
{
	if (a < 100)
		return true;
	int h, t, o;
	h = a / 100;
	a = a % 100;
	t = a / 10;
	a = a % 10;
	o = a;
	if ((h + o) == 2 * t)
		return true;
	else
		return false;
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	

	unsigned int n;
	cin >> n;
	unsigned int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (isHansu(i))
			cnt++;
	}
	cout << cnt << endl;
}
