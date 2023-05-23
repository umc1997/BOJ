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

string input[20010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> input[i];
	// solution
	int maxi = -1;
	int a = 0;
	int b = 1;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			int cnt = 0;
			for (int k = 0; k < min(input[i].size(), input[j].size()); k++) {
				if (input[i][k] != input[j][k]) {
					break;
				}
				cnt++;
			}
			if (cnt > maxi) {
				maxi = cnt;
				a = i;
				b = j;
			}
		}
	}
	cout << input[min(a, b)] << '\n' << input[max(a, b)] << '\n';

	return 0;
}