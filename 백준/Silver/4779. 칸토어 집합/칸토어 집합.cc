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

void cantor(int n) {
	if (n == 0) {
		cout << '-';
		return;
	}
	else{
		cantor(n - 1);
		for (int i = 0; i < pow(3, n - 1); i++) cout << ' ';
		cantor(n - 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N;
	while (cin >> N) {
		cantor(N);
		cout << '\n';
	}
	return 0;
}