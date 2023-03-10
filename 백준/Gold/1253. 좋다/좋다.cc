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

#define MAX 2000
long long arr[MAX + 10];

int main()
{
	// init
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input & assignment
	int output = 0; 
	int N;
	cin >> N;
	for (int i = 0; i< N ; i++) cin >> arr[i];

	// solution
	sort(arr, arr + N);
	for (int i = 0; i < N; i++) {
		int left = 0;
		int right = N - 1;
		while (left < right) {
			if (left == i) left++;
			else if (right == i) right--;
			else {
				long long sum = arr[left] + arr[right];
				if (sum == arr[i]) {
					output++;
					break;
				}
				else if (sum > arr[i]) right--;
				else left++;
			}
		}
	}

	// output
	cout << output << '\n';
	return 0;
}