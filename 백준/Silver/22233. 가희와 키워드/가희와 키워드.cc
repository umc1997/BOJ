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
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M;
	cin >> N >> M;
	unordered_set<string> memo;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		memo.insert(s);
	}
	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		while (s.find(',') != string::npos) {
			int idx = s.find(',');
			memo.erase(s.substr(0, idx));
			s = s.substr(idx + 1);
		}
		memo.erase(s);
		cout << memo.size() << '\n';
	}
	
	return 0;
}