#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int A, B;
	cin >> N;

	A = N * 0.78;
	B = N - N * 0.2 * 0.22;


	cout << A << " " << B << "\n";
	
	return 0;
}
