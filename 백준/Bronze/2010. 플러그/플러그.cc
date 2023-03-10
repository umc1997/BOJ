#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		sum += a;
	}
	sum -= (N - 1);
	cout << sum << "\n";

}
