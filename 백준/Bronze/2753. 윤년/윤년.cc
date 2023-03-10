#include <iostream>

using namespace std;

int main()
{
	unsigned int s;
	cin >> s;
	cout << ((s % 400 == 0) || ((s % 100 != 0) && (s % 4 == 0))) << endl;
}