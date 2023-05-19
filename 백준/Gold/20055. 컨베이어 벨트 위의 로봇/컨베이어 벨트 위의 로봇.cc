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
#include <stack>
using namespace std;

int N, K;
int belt[210];
int beltIdx(int idx, int time) {
	int res = idx - (time % (2 * N));
	if (res < 0) res += 2 * N;
	return res == 0 ? 2 * N : res;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	cin >> N >> K;
	for (int i = 1; i <= 2 * N; i++) cin >> belt[i];
	// solution
	int time = 0;
	vector<int> robots;
	while (true) {
		int zeroCnt = 0;
		for (int i = 1; i <= 2 * N; i++) if (belt[i] == 0) zeroCnt++;
		if (zeroCnt >= K) break;
		// 1. belt moving
		time++;
		for (auto& robotIdx : robots) robotIdx++;
		if (!robots.empty() && robots.front() == N) robots.erase(robots.begin());

		// 2. robot moving
		for (auto& robotIdx : robots) {
			if (belt[beltIdx(robotIdx + 1, time)] >= 1 && find(robots.begin(), robots.end(), robotIdx + 1) == robots.end()) {
				belt[beltIdx(robotIdx + 1, time)]--;
				robotIdx++;
			}
		}
		if (!robots.empty() && robots.front() == N) robots.erase(robots.begin());

		// 3. robot placement
		if (belt[beltIdx(1, time)] != 0) { 
			robots.push_back(1); 
			belt[beltIdx(1, time)]--;
		}
	}
	cout << time << '\n';
	return 0;
}