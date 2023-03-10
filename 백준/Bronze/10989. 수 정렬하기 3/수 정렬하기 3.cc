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
	unsigned int N;
	cin >> N;
	int count[10001] = { 0, };
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		count[a]++;
		if (max < a)
			max = a;
	}
	for (int i = 0; i <= max; i++)
	{
		for (int j = 0; j < count[i]; j++)
			cout << i << "\n";
	}
	return 0;
}
