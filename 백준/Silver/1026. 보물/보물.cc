#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int a[60];
int b[60];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> b[i];
	}
	sort(a, a + N);
	sort(b, b + N, greater<int>());
	long long S = 0;
	for (int i = 0; i < N; i++)
	{
		S += a[i] * b[i];
	}
	cout << S << "\n";
	return 0;
}
