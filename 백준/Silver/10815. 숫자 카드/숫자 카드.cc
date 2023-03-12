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

vector<int> v;
bool binarySearch(int num) {
	int left = 0, right = v.size() - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (v[mid] == num) return true;
		else if (v[mid] > num) right = mid - 1;
		else left = mid + 1;
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cin >> M;
	// solution
	for (int i = 0; i < M; i++) {
		int input;
		cin >> input;
		bool flag = binarySearch(input);
		if (flag) cout << "1 ";
		else cout << "0 ";
	}
	// output
	cout << '\n';

	return 0;
}