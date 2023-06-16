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
	string input;
	cin >> input;
	int size = input.size();
	// solution
	int a = 0;
	for (int i = 0; i < size; i++) {
		if (input[i] == 'a') a++;
	}
	int res = size;
	for (int i = 0; i < size; i++) {
		int b = 0;
		for (int j = i; j < i + a; j++) {
			if (input[j % size] == 'b') b++;
		}
		res = min(res, b);
	}
	cout << res << '\n';
	return 0;
}