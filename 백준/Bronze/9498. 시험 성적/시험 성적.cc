#include <iostream>

using namespace std;

int main()
{
	unsigned int s;
	cin >> s;
	if (s >= 90)
		cout << "A" << endl;
	else if (s >= 80)
		cout << "B" << endl;
	else if (s >= 70)
		cout << "C" << endl;
	else if (s >= 60)
		cout << "D" << endl;
	else
		cout << "F" << endl;
}