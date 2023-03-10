#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int antenna, eyes;
	cin >> antenna >> eyes;
	if (antenna >= 3 && eyes <= 4)
		cout << "TroyMartian" << "\n";
	if (antenna <= 6 && eyes >= 2)
		cout << "VladSaturnian" << "\n";
	if (antenna <= 2 && eyes <= 3)
		cout << "GraemeMercurian" << "\n";

	return 0;	
}
