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
	int N, M, K;
	cin >> N >> M >> K;
	unsigned int num = -1;
	while (true)
	{
		num++;
		if ((2 * num <= N) && (num <= M) && (N + M - 3 * num >= K))continue;
		else
		{
			num--;
			break;
		}
	}
	cout << num << "\n";
	return 0;
}
