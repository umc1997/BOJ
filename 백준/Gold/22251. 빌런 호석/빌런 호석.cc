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

int convert[10][10];	
bool led[10][7] =
{
	{1,1,1,0,1,1,1},
	{0,0,1,0,0,1,0},
	{1,0,1,1,1,0,1},
	{1,0,1,1,0,1,1},
	{0,1,1,1,0,1,0},
	{1,1,0,1,0,1,1},
	{1,1,0,1,1,1,1},
	{1,0,1,0,0,1,0},
	{1,1,1,1,1,1,1},
	{1,1,1,1,0,1,1}
};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			int dif = 0;
			for (int k = 0; k < 7; k++) {
				if (led[i][k] != led[j][k]) dif++;
			}
			convert[i][j] = dif;
		}
	}
	// input & assignment
	int N, K, P, X;
	cin >> N >> K >> P >> X;
	// solution
	int res = 0;
	for (int i = 1; i <= N; i++) {
		int cnt = 0;
		int num1 = X;
		int num2 = i;
		for (int j = 0; j < K; j++) {
			cnt += convert[num1 % 10][num2 % 10];
			if (cnt > P) break;
			num1 /= 10;
			num2 /= 10;
		}
		if (cnt >= 1 && cnt <= P) res++;
	}
	cout << res << '\n';
	return 0;
}