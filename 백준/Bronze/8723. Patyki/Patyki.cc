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
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	int a, b, c;
	a = arr[0];
	b = arr[1];
	c = arr[2];
	if (a * a + b * b == c * c)
		cout << 1 << "\n";
	else if (a == b && b == c)
		cout << 2 << "\n";
	else
		cout << 0 << "\n";
	return 0;

}