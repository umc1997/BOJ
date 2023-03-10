#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int reverse(int i)
{
	int h, t, o;
	h = i / 100;
	i %= 100;
	t = i / 10;
	o = i % 10;
	return o * 100 + t * 10 + h;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	unsigned int A, B;
	cin >> A >> B;

	cout << max(reverse(A), reverse(B)) << endl;

	return 0;
}
