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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	string S;
	cin >> S;
	int cnt1 = 0, cnt2 = 0;
	int size = S.size();
	for (int i = 0; i < size; i++) {
		if (S[i] == '0') cnt1++;
		else if (S[i] == '1') cnt2++;
	}
	cnt1 /= 2;
	cnt2 /= 2;
	string output = "";
	for (int i = 0; i < cnt1; i++) output += "0";
	for (int i = 0; i < cnt2; i++) output += "1";
	cout << output << '\n';

	return 0;
}