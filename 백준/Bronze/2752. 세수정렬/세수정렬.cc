#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_map>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[3];
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	sort(arr, arr + 3);
	cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
	return 0;
}
