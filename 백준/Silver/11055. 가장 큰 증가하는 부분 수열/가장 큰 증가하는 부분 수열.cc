#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int>a) {
	int answer = 0;
	vector <int> dp(n);
	dp[0] = a[0];
	for (int i = 1; i < n; i++) {
		dp[i] = a[i];
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j]) {
				dp[i] = max(dp[j] + a[i], dp[i]);
			}
		}
	}
	for (int i = 0; i < n; i++)
		answer = max(dp[i], answer);
	return answer;

}
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << solution(n, a) << endl;
}