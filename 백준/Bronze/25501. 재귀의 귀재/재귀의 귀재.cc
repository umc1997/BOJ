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
	int T;
	cin >> T;
	while (T--) {
		string str;
		cin >> str;
		int size = str.size();
		bool isPalindrome = true;
		int recursion = 0;
		for (int i = 0; i < size / 2 + 1; i++) {
			recursion++;
			if (str[i] != str[size - i - 1]) {
				isPalindrome = false; 
				break;
			}
		}
		cout << isPalindrome << " " << recursion << '\n';
	}
	
	
	// output

	return 0;
}