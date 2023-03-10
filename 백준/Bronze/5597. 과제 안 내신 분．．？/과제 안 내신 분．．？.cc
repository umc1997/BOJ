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
	bool arr[31] = { false, };
	int t = 28;
	while (t--)
	{
		int a;
		cin >> a;
		arr[a] = true;
	}
	for (int i = 1 ;i <= 30; i++)
	{
		if (!arr[i])
			cout << i << "\n";
	}
	return 0;
}