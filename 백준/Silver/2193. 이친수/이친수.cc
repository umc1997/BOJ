#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solve(int n, int end,vector< vector<long long>> & memo) {
	if (memo[n][end] != -1) {
		return memo[n][end];
	}
	else if (n == 1) {
		return memo[n][end] = end;
	}
	else {
		if (end == 0) {
			return memo[n][end] = solve(n - 1, 0, memo) + solve(n - 1, 1,memo);
		}
		else {
			return memo[n][end] = solve(n - 1, 0, memo);
		}
	}
}
long long solution(int n) {
	vector<vector<long long>> memo(n + 1, vector<long long>(2, -1));
	return solve(n, 0, memo) + solve(n, 1, memo);
}
int main()
{
	int n;
	cin >> n;
	cout << solution(n) << endl;
	return 0;
}