#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> v;
	unsigned int N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
			v.push_back(i);
	}
	if (v.size() < K)
		cout << 0 << "\n";
	else
		cout << v[K - 1] << "\n";
	return 0;
}