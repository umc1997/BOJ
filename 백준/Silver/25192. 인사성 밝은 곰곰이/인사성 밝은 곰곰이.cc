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
	int N;
	cin >> N;
	map<string, string> m;
	int result = 0;
	while (N--) {
		string input;
		cin >> input;
		if (input == "ENTER") m.clear();
		else if (m.find(input) != m.end()) continue;
		else {
			m[input] = input;
			result++; 
		}
	}
	cout << result << '\n';
	return 0;
}