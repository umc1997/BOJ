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
	int result = ceil((double)(B - A) / K);
	
	cout << result << "\n";

	return 0;	
}
