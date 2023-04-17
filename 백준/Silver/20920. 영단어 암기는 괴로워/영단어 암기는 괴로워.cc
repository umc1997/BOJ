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

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.second == b.second) {
		if (a.first.size() == b.first.size()) return a.first < b.first;
		else return a.first.size() > b.first.size();
	}
	else return a.second > b.second;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M;
	cin >> N >> M;
	map<string, int> words;
	while (N--) {
		string input;
		cin >> input;
		if (input.size() >= M) {
			if (words.find(input) != words.end()) words[input]++;
			else words[input] = 1;
		}
	}
	vector<pair<string, int>> v(words.begin(), words.end());
	sort(v.begin(), v.end(), compare);
	for (auto it : v) cout << it.first << '\n';
	return 0;
}