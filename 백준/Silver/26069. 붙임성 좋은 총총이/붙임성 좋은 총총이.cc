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
	m["ChongChong"] = "ChongChong";
	while (N--) {
		string input1, input2;
		cin >> input1 >> input2;
		if (m.find(input1) != m.end()) m[input2] = input2;
		if (m.find(input2) != m.end()) m[input1] = input1;
	}
	cout << m.size() << '\n';
	return 0;
}