#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>

using namespace std;

int DP[10010][3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// input & assignment
	int T;
	cin >> T;
	// solution
	DP[1][0] = 1;
	DP[1][1] = 0;
	DP[1][2] = 0;
	DP[2][0] = 1;
	DP[2][1] = 1;
	DP[2][2] = 0;
	DP[3][0] = 1;
	DP[3][1] = 1;
	DP[3][2] = 1;
	for (int i = 4; i <= 10000; i++) {
		DP[i][0] = 1;
		DP[i][1] = DP[i - 2][0] + DP[i - 2][1];
		DP[i][2] = DP[i - 3][0] + DP[i - 3][1] + DP[i - 3][2];
	}

	while (T--) {
		int n;
		cin >> n;
		cout << DP[n][0]+ DP[n][1]+ DP[n][2] << endl;
	}
	// output
	
	
	return 0;
}