#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <stack>

#define MAX 10000000
using namespace std;
int check[MAX + 10];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	vector<int> prime;
	check[0] = check[1] = true;
	for (int i = 2; i < sqrt(MAX); i++) {
		if (check[i] == false) {
			for (int j = i + i; j < MAX; j += i) {
				check[j] = true;
			}
		}
	}
	for (int i = 2; i < MAX; i++) {
		if (!check[i]) prime.push_back(i);
	}
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int t;
		cin >> t;
		int result = 1;
		int idx = 0;
		int prime_num = prime.size();
		while (t != 1) {
			if (idx >= prime_num) {
				result *= 3;
				break;
			}
			int p = prime[idx];
			int cnt = 0;
			while (t % p == 0) {
				t /= p;
				cnt++;
			}
			result *= (2 * cnt + 1);
			idx++;
		}
		result = (result + 1) / 2;
		cout << "Scenario #" << i << ":\n";
		cout << result << '\n' << '\n';
	}

	return 0;
}