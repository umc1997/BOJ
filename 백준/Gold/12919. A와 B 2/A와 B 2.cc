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

string T;
string reverseString(string s) {
	string res = s;
	reverse(res.begin(), res.end());
	return res;
}
bool solution(string S) {
	if (S.size() == T.size()) 	return S == T;
	else if (T.find(S) == string::npos && T.find(reverseString(S)) == string::npos) return false;
	else return (solution(S + "A") || solution(reverseString(S + "B")));
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	string S;
	cin >> S >> T;
	if (solution(S)) cout << "1\n";
	else cout << "0\n";
	return 0;
}