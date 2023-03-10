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

	unsigned int N, sum = 0;
	cin >> N;
	vector<unsigned int> times(N);
	for (int i = 0; i < N; i++)
	{
		cin >> times[i];
	}
	sort(times.begin(), times.end());

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			sum += times[j];
		}
	}
	cout << sum << "\n";
	return 0;
}