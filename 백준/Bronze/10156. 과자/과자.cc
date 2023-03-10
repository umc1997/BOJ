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
	int K, N, M;
	cin >> K >> N >> M;
	int a = K * N - M;
	if (a > 0)
		cout << a << "\n";
	else
		cout << 0 << "\n";
	return 0;
}