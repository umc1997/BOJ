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

	unsigned int N, M;
	cin >> N >> M;
	unsigned int result = N * (M - 1) + 1;
	
	cout << result << "\n";
	return 0;
}

