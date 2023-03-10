#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// input & assignment
	string input;
	cin >> input;	

	// solution
	int s = input.size();
	int N = 0;
	int i = 0;
	while (true) {
		N++;
		string Num = to_string(N);
		while (Num.size()) {
			char cur = input[i];
			if (Num[0] == cur) {
				i++;
			}
			Num = Num.substr(1);
			if (i == s)
				break;
		}
		if (i == s)
			break;
	}
	// output
	cout << N << endl;

	return 0;
}