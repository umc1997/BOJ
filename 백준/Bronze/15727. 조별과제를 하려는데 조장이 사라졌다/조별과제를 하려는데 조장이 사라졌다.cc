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
	
	
	unsigned int A;
	cin >> A;
	bool b = false;
	if (A % 5 == 0)
		b = true;
	A /= 5;
	if (!b)
		A++;
	cout << A << "\n";
	return 0;
}