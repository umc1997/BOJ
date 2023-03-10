#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	if (M == 1 || M == 2)
		cout << "NEWBIE!" << "\n";
	else if (M <= N)
		cout << "OLDBIE!" << "\n";
	else
		cout << "TLE!" << "\n";
	return 0;
}