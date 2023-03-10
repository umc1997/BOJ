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
	unsigned int N, W, H, L;
	cin >> N >> W >> H >> L;
	unsigned int result = N;
	result = min(result, (W / L) * (H / L));
	cout << result << "\n";
	return 0;	
}
