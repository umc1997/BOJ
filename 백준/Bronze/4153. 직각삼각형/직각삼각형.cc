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
	
	unsigned int a, b, c;
	cin >> a >> b >> c;
	while (a != 0)
	{
		unsigned int tmp;
		if (a > b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		if (b > c)
		{
			tmp = b;
			b = c;
			c = tmp;
		}
		if (a > b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		if ((a * a + b * b) == c * c)
			cout << "right" << "\n";
		else
			cout << "wrong" << "\n";
		cin >> a >> b >> c;
	}
	
	return 0;
}
