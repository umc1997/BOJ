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
	
	
	unsigned int ax, ay, az, cx, cy, cz;
	cin >> ax >> ay >> az >> cx >> cy >> cz;
	cout << cx - az << " " << cy / ay << " " << cz - ax << "\n";
	return 0;
}