#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>

using namespace std;
int value(string in) {
	if (in.find('+') != string::npos) {
		int idx = in.find('+');
		return value(in.substr(0, idx)) + value(in.substr(idx + 1));
	}
	else if (in.rfind('-') != string::npos) {
		int idx = in.rfind('-');
		return value(in.substr(0, idx)) - value(in.substr(idx + 1));
	}
	else {
		int res = 0;
		for (int i = 0; i < in.size(); i += 2) {
			res *= 10;
			res += (in[i] - '0');
		}
		return res;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// input & assignment
	char op[3] = { ' ', '+', '-' };
	int T;
	cin >> T;
	// solution
	while (T--) {
		int N;
		cin >> N;
		vector<string> output = {};
		int case_num = pow(3, N - 1);
		for (int c = 0; c < case_num; c++) {
			int bit = c;
			string str = "";
			for (int i = 1; i <= N; i++) {
				str += to_string(i);
				if(i != N)
					str += op[bit % 3];
				bit /= 3;
			}
			if (value(str) == 0) {
				output.push_back(str);
			}
		}
		sort(output.begin(), output.end());
		int size = output.size();
		for (int i = 0; i < size; i++) {
			cout << output[i] << endl;
		}
		cout << endl;
	}
	
	// output
	
	return 0;
}