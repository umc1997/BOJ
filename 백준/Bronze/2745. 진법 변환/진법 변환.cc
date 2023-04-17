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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	string N;
	int B;
	cin >> N >> B;
	int result = 0;
	for (int i = 0; i < N.size(); i++) {
		result *= B;
		char c = N[i];
		if (c >= 'A' && c <= 'Z') {
			result += c - 'A' + 10;
		}
		else {
			result += c - '0';
		}
	}
	cout << result << '\n';

	return 0;
}