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
#include <unordered_map>
using namespace std;

typedef pair<string, int> psi;

psi title[100010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string s;
		int a;
		cin >> s >> a;
		title[i] = make_pair(s, a);
	}
	for (int i = 0; i < M; i++) {
		int power;
		cin >> power;
		int left = 0;
		int right = N - 1;
		int res = 0;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (title[mid].second < power) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
				res = mid;
			}
		}
		cout << title[res].first << '\n';
	}
	
	return 0;
}