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
	unordered_map<string, bool> hm;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		hm[s] = true;
	}
	// solution
	int result = 0;
	for (int i = 0; i < M; i++) {
		string input;
		cin >> input;
		auto flag = hm.find(input);
		if (flag != hm.end()) result++;
	}
	// output
	cout << result << '\n';

	return 0;
}