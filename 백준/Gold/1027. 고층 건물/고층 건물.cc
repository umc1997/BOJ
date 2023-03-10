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
using namespace std;

long long height[51];
int bulidings[51][51];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> height[i];
	}
	memset(bulidings, 0, sizeof(bulidings));
	int output = -1;
	// solution
	for (int i = 0; i < N; i++){
		for (int j = i + 1; j < N; j++) {
			int dx = j - i;
			int dy = height[j] - height[i];
			double dydx = (double) dy / dx;
			bool flag = true;
			for (int x = 1; x < dx; x++) {
				double limit = (double)x * dydx + height[i]; 
				if (height[i + x] >= (double)x * dydx + height[i]) {
					flag = false;
				}
			}
			if (flag) {
				bulidings[i][j] = 1;
				bulidings[j][i] = 1;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			cnt += bulidings[i][j];
		}
		if (cnt > output) output = cnt;
	}
	// output
	cout << output << '\n';
	return 0;
}