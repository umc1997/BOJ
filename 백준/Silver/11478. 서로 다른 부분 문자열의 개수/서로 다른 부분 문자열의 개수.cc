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
	string str;
	cin >> str;
	set<string> s;
	int size = str.size();
	for (int i = 0; i < size; i++) {
		for (int j = 1; j <= size - i; j++) {
			s.insert(str.substr(i, j));
		}
	}
	
	// output
	cout << s.size() << "\n";

	return 0;
}