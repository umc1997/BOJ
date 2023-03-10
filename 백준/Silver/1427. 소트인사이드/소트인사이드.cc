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
	vector<int> arr;
	char a = ' ';
	do {
		a = cin.get();
		if (a == '\n')
			break;
		arr.push_back(a - '0');
	} while (true);
	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i];
	}
	cout << "\n";
}
