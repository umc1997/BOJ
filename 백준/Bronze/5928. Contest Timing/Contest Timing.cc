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
	unsigned int D, H, M;
	cin >> D >> H >> M;
	unsigned int startTime = 11 * 60 + 11;
	unsigned int endTime = (D - 11) * 1440 + H * 60 + M;
	if (endTime < startTime)
		cout << -1 << "\n";
	else
		cout << endTime - startTime << "\n";

	return 0;	
}
