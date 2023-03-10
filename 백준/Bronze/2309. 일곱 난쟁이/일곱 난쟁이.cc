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
	int arr[9];
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sum -= 100;
	bool flag = false;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if ((i != j) && (arr[i] + arr[j] == sum))
			{
				arr[i] = 0;
				arr[j] = 0;
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	sort(arr, arr + 9);
	for (int i = 2; i < 9; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}
