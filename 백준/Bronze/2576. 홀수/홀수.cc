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
	vector<int> a;
	for (int i = 0; i < 7; i++)
	{
		int k;
		cin >> k;
		if (k % 2 == 1)
			a.push_back(k);
	}
	if (a.empty())
	{
		cout << -1 << "\n";
		return 0;
	}
	sort(a.begin(), a.end());
	int sum = 0;
	for (int i = 0; i < a.size(); i++)
		sum += a[i];
	cout << sum << "\n" << a[0] << "\n";
	return 0;
}
