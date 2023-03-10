#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;
int arr[101][101][101];
int DH[6] = { 0,0,1,-1,0,0 };
int DX[6] = { 0,0,0,0,1,-1 };
int DY[6] = { 1,-1,0,0,0,0 };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M, H;
	cin >> M >> N >> H;
	memset(arr, 0, sizeof(arr));
	queue<pair<int,pair<int, int>>> Q;
	for (int k = 0; k < H; k++) 
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				cin >> arr[k][i][j];
				if (arr[k][i][j] == 1)
					Q.push(make_pair(k, make_pair(i, j)));
			}
		}
	}
	while (!Q.empty())
	{
		int currentH = Q.front().first;
		int currentX = Q.front().second.first;
		int currentY = Q.front().second.second;
		Q.pop();
		for (int i = 0; i < 6; i++)
		{
			int nextH = currentH + DH[i];
			int nextX = currentX + DX[i];
			int nextY = currentY + DY[i];
			if (nextH < H && nextX < N && nextY < M && nextH >= 0 && nextX >= 0 && nextY >= 0 && arr[nextH][nextX][nextY] == 0)
			{
				arr[nextH][nextX][nextY] = arr[currentH][currentX][currentY] + 1;
				Q.push(make_pair(nextH, make_pair(nextX, nextY)));
			}
		}
	}
	int days = INT_MIN;
	for (int k = 0; k < H; k++)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (arr[k][i][j] == 0)
				{
					cout << -1 << "\n";
					return 0;
				}
				if (days < arr[k][i][j])
					days = arr[k][i][j];
			}
		}
	}
	cout << days - 1 << "\n";
	return 0;
}