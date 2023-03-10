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
	int A, B, K;
	cin >> A >> B >> K;
	unsigned int result = 0;
	result = (A / K) * (B / K) - max(0, A / K - 2) * max(0, B / K - 2);
	
	cout << result << "\n";

	return 0;	
}
