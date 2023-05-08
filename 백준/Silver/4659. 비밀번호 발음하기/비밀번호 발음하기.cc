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

bool is_vowel(char c) {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	string input = "";
	cin >> input;
	while (input != "end") {
		bool flag1 = false, flag2 = true, flag3 = true;
		int size = input.size();
		for (int i = 0; i < size; i++) {
			if(is_vowel(input[i])) flag1 = true;
			if (i >= 2) {
				if (is_vowel(input[i]) && is_vowel(input[i - 1]) && is_vowel(input[i - 2])) flag2 = false;
				else if (!is_vowel(input[i]) && !is_vowel(input[i - 1]) && !is_vowel(input[i - 2])) flag2 = false;
			}
			if (i >= 1) {
				if (input[i] == input[i - 1]) {
					if (input[i] == 'e' || input[i] == 'o') continue;
					else flag3 = false;
				}
			}
			if (!flag2 || !flag3) break;
		}
		if (flag1 && flag2 && flag3) cout << '<' << input << "> is acceptable.\n";
		else  cout << '<' << input << "> is not acceptable.\n";

		cin >> input;
	}
	return 0;
}