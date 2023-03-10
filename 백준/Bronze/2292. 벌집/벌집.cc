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
	int N;
	cin >> N;
	int result = 1;
	N -= 1;
	int cnt = 1;
	while (N > 0)
	{
		N -= (6 * cnt);
		result++;
		cnt++;
	}
	cout << result << "\n";
	return 0;
}
