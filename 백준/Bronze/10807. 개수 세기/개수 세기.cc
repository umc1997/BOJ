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

	int N = 0;
	cin >> N;
	int arr[120];
	for (int i = 0;i < N;i++)
	{
		cin >> arr[i];
	}
	int v = 0;
	cin >> v;
	int result = 0;
	for (int i = 0;i < N;i++)
	{
		if (arr[i] == v)
			result++;
	}
	cout << result << endl;
}