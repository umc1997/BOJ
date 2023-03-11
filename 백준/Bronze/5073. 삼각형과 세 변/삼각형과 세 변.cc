#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	while (true){
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		// solution
		int arr[3] = { a,b,c };
		sort(arr, arr + 3);
		if (arr[0] + arr[1] <= arr[2]) cout << "Invalid\n";
		else {
			if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[0]) cout << "Equilateral\n";
			else if(arr[0] == arr[1] || arr[1] == arr[2] || arr[2] == arr[0]) cout << "Isosceles\n";
			else cout << "Scalene\n";
		}
		// output
	}
	return 0;
}