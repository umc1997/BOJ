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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	int H, W, N, M;
	cin >> H >> W >> N >> M;
	int a = (H + N) / (N + 1);
	int b = (W + M) / (M + 1);
	cout << a * b << '\n';
	return 0;
}