#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	string s;
	cin >> s;
	for (int i = 0; i < 3; i++)
	{
		cout << (arr[s[i] - 'A']) << " ";
	}
	cout << "\n";
	return 0;
}