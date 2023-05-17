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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int n;
	cin >> n;
	int arr[26];
	memset(arr, 0, sizeof(arr));
	string first;
	cin >> first;
	for (int i = 0; i < first.size(); i++) {
		arr[first[i] - 'A']++;
	}
	int res = 0;
	for (int i = 1; i < n; i++) {
		string s;
		int tmp[26];
		memset(tmp, 0, sizeof(tmp));
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			tmp[s[j] - 'A']++;
		}
		int cnt = 0;
		for (int j = 0; j < 26; j++) {
			cnt += abs(tmp[j] - arr[j]);
		}

		if (cnt <= 1) res++;
		else if (cnt == 2 && first.size() == s.size()) res++;
	}
	cout << res << '\n';
	
	return 0;
}