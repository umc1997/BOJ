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
long long periodSum[26][200010];
string S;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int q;
	cin >> S >> q;
	int size = S.size();
	// solution
	memset(periodSum, 0, sizeof(periodSum));
	periodSum[S[0] - 'a'][0] = 1;
	for (int i = 1; i < size; i++) {
		char c = S[i];
		for (int j = 0; j < 26; j++) {
			if (c == j + 'a') periodSum[j][i] = periodSum[j][i - 1] + 1;
			else periodSum[j][i] = periodSum[j][i - 1];
		}
	}
	while (q--) {
		char a;
		int l, r;
		cin >> a >> l >> r;
		// output
		if(l == 0)
			cout << periodSum[a - 'a'][r] << '\n';
		else
			cout << periodSum[a - 'a'][r] - periodSum[a - 'a'][l - 1] << '\n';
	}
	return 0;
}