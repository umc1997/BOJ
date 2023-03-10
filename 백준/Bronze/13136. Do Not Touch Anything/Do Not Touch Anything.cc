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
	double R, C, N;
	cin >> R >> C >> N;
	long long ll = (long long) ceil(R / N) * ceil(C / N);
	cout << ll << "\n";
	return 0;
}