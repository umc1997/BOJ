#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>
#include <set>
#include <unordered_map>
using namespace std;

int recursion[41];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int n;
	cin >> n;
	// solution
	recursion[1] = 1;
	recursion[2] = 1;
	for (int i = 3; i <= 40; i++) {
		recursion[i] = recursion[i - 1] + recursion[i - 2];
	}
	// output
	cout << recursion[n] << " " << n - 2 << '\n';
	return 0;
}