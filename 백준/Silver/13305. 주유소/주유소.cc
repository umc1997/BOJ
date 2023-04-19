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

int length[100010];
int cities[100010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N;
	cin >> N;
	for (int i = 0; i < N - 1; i++) cin >> length[i];
	for (int i = 0; i < N; i++) cin >> cities[i];
	int curc = cities[0];
	int curl = length[0];
	long long result = 0;
	for (int i = 1; i < N - 1; i++) {
		if (curc > cities[i]) {
			result += (long long) curc * curl;
			curc = cities[i];
			curl = length[i];
		}
		else {
			curl += length[i];
		}
	}
	result += (long long) curc * curl;
	cout << result << '\n';

	return 0;
}