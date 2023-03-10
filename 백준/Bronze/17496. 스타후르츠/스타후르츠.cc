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
	
	
	unsigned int A, B, C, D;
	cin >> A >> B >> C >> D;
	cout << (A - 1) / B * C * D << "\n";
	return 0;
}