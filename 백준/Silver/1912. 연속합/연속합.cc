#include <iostream>
#include <algorithm>

using namespace std;

int arr[100010];
int D[100010];

int main() 
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		cin >> a;
		arr[i] = a;
	}
	
	D[0] = arr[0];
	for (int i = 0; i < n; i++)
	{
		D[i] = arr[i] + max(D[i - 1], 0);
	}
	int max =-1000;
	for (int i = 0; i < n; i++)
	{
		if (D[i] >= max)
		{
			max = D[i];
		}
	}

	cout << max << endl;

	return 0;
}