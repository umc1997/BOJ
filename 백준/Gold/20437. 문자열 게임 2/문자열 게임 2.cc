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
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int T;
	cin >> T;
	while(T--){
		int alphabet[26];
		memset(alphabet, 0, sizeof(alphabet));
		string W;
		int K;
		cin >> W >> K;
		int size = W.size();
		int min = 10010;
		int max = 0;
		vector<char> possibleChar;
		// solution
		for (int i = 0; i < size; i++)	alphabet[W[i] - 'a']++;
		for (int i = 0; i < 26; i++) {
			if (alphabet[i] >= K)	possibleChar.push_back(i + 'a');
		}
		if (possibleChar.empty()) {
			cout << -1 << '\n';
			continue;
		}
		for (int i = 0; i < possibleChar.size(); i++) {
			char currentChar = possibleChar[i];
			int startIdx = -1;
			vector<int> idxs = {};
			while (true) {
				size_t idx = W.find(currentChar, startIdx + 1);
				if (idx == string::npos) break;
				idxs.push_back(idx);
				startIdx = idx;
			}
			int bound = idxs.size() - K;
			for (int j = 0; j <= bound; j++) {
				int current = idxs[j + K - 1] - idxs[j] + 1;
				if (current > max) max = current;
				if (current < min) min = current;
			}			
		}
		// output
		cout << min << " " << max << "\n";
	}
	return 0;
}