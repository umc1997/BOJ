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

	int N, M;
	cin >> N >> M;
	int arr[120][120];
	for (int i = 0;i < N;i++)
	{
		for (int j = 0; j < M;j++)
			cin >> arr[i][j];
	}
	for (int i = 0;i < N;i++)
	{
		for (int j = 0; j < M;j++)
		{
			int a = 0;
			cin >> a;
			arr[i][j] += a;
		}
	}
	for (int i = 0;i < N;i++)
	{
		for (int j = 0; j < M;j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}