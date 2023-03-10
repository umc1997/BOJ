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

	int arr[8];
	bool isAs = true;
	bool isDe = true;
	cin >> arr[0];
	for (int i = 1; i < 8; i++)
	{
		cin >> arr[i];
		if (arr[i] > arr[i - 1])
			isDe = false;
		if (arr[i] < arr[i - 1])
			isAs = false;
	}
	if (isAs)
		cout << "ascending" << "\n";
	else if (isDe)
		cout << "descending" << "\n";
	else
		cout << "mixed" << "\n";


	return 0;
}