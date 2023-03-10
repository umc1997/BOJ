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
	vector<long long> arr;
	unsigned int MAX = 200100;
	for (int i = 0; i < N; i++)
	{
		long long x, y;
		cin >> x >> y;
		x += 100000;
		y += 100000;
		arr.push_back(x * MAX + y);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++)
	{
		long long x1, y1;
		x1 = arr[i] / MAX;
		y1 = arr[i] % MAX;
		x1 -= 100000;
		y1 -= 100000;
		cout << x1 << " " << y1 << "\n";
	}
}
