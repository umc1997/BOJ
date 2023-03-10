#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// input & assignment
	int N;
	cin >> N;
	int input[11];
	int output[11];
	for (int i = 0; i < N; i++)
		output[i] = 0;
	// solution
	for (int i = 0; i < N; i++) {
		cin >> input[i];
	}
	output[input[0]] = 1;
	for (int i = 1; i < N; i++)
	{
		int idx = 0;
		int n = -1;
		while (true) {
			if (output[idx] == 0) n++;
			if (n == input[i]) {
				output[idx] = i + 1; 
				break;
			}
			idx++;
		}
	}
	// output
	for (int i = 0; i < N; i++) {
		cout << output[i] << " ";
	}
	cout << endl;

	return 0;
}