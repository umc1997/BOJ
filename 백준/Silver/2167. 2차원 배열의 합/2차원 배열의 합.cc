#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int arr[310][310];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
			cin >> arr[i][j];
	}
	unsigned int K;
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		int a, b, c, d;
		long sum = 0;
		cin >> a >> b >> c >> d;
		for (int p = a; p <= c; p++)
		{
			for (int q = b; q <= d; q++)
			{
				sum += arr[p][q];
			}
		}
		cout << sum << "\n";
	}
	return 0;
}
