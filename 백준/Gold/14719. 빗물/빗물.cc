#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>

using namespace std;

int arr[510][510];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// input & assignment
	int H, W;
	cin >> H >> W;
	for (int i = 0; i < W; i++) {
		int input;
		cin >> input;
		for (int j = 0; j < input; j++) {
			arr[j][i] = 1;
		}
	}
	// solution
	int result = 0;
	for (int i = 0; i < H; i++)
	{
		int tmp = 0;
		bool left = false;
		for (int j = 0; j < W; j++)
		{
			if (arr[i][j]) {
				if (!left) left = true;
				else { 
					result += tmp;
					tmp = 0;
				}
			}
			else
			{
				if (left) tmp++;
			}
		}
	}

	// output
	cout << result << endl;

	return 0;
}