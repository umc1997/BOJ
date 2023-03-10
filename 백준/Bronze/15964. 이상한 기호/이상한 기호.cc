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
	
	
	long A ,B;
	cin >> A >> B;
	cout << (A + B) * (A - B) << "\n";
	return 0;
}