#include <iostream>

using namespace std;

int main()
{
	int num;
	int a;
	int cycle = 1;
	cin >> a;
	num = a;
	int tmp = num % 10 + num / 10;
	int newnum = (num % 10 * 10) + tmp % 10;
	while (newnum != a)
	{
		num = newnum;
		tmp = num % 10 + num / 10;
		newnum = (num % 10 * 10) + tmp % 10;
		cycle++;
	}
	printf("%d\n", cycle);
	return 0;
}