#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
long long arr[100010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N, M;
	cin >> N >> M;
	arr[0] = 0;
	for (int i = 1;i <= N;i++)
	{
		long long a;
		cin >> a;
		arr[i] = arr[i - 1] + a;
	}
	for (int t = 0; t < M;t++)
	{
		long long a, b;
		cin >> a >> b;
		cout << arr[b] - arr[a - 1] << "\n";
	}

}