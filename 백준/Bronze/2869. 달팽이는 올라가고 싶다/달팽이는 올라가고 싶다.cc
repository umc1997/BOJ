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
	unsigned int A, B, V;
	cin >> A >> B >> V;
	cout << ((V - B - 1) / (A - B)) + 1<< endl;
	return 0;
}
