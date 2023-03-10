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
	vector<int> arr;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\n";
	}
}
