#include <iostream>
#include <algorithm>

using namespace std;

int arr[2][100000];
int D[100010][2];
int main() 
{
	int testCase = 0;
	cin >> testCase;
	for (int i = 0; i < testCase; i++)
	{
		int n = 0;
		cin >> n;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int a;
				cin >> a;
				arr[i][j] = a;
			}
		}
		D[0][0] = arr[0][0];
		D[0][1] = arr[1][0];
		D[1][0] = D[0][1] + arr[0][1];
		D[1][1] = D[0][0] + arr[1][1];
		for (int i = 0; i < n; i++)
		{
			D[i][0] = max(D[i - 1][1], D[i - 2][1]) + arr[0][i];
			D[i][1] = max(D[i - 1][0], D[i - 2][0]) + arr[1][i];
		}

		cout << max(D[n - 1][0], D[n - 1][1]) << endl;

	}

	return 0;
}