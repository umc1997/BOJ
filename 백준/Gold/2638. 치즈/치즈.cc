#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int arr[110][110];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
// -1 = inside
// 0 = tile
// n = num (maxminum = 4)
int N, M;
bool visited[110][110];
void check()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			visited[i][j] = 0;
		}
	}

	vector<pair<int, int>> v;
	v.push_back(make_pair(0, 0));
	visited[0][0] = true;
	//
	while (!v.empty()) {
		
		int x = v.back().first;
		int y = v.back().second;
		v.pop_back();
		for (int k = 0; k < 4; k++)
		{
			int tx = x + dx[k];
			int ty = y + dy[k];
			
			if (tx >= 0 && ty >= 0 && tx < N && ty < M)
			{
				if ((!visited[tx][ty]) && arr[tx][ty] <= 0)
				{
					visited[tx][ty] = true;
					arr[tx][ty] = 0;
					v.push_back(make_pair(tx, ty));
				}
			}
		}
	}
	//
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	int time = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int a;
			cin >> a;
			if (a == 0)
				arr[i][j] = -1;
			else
				arr[i][j] = a;
		}
	}
	bool noCheese = false;
	while (!noCheese)
	{
		//check inside
		check();
		//check cheese
		for (int i = 1; i < N - 1; i++)
		{
			for (int j = 1; j < M - 1; j++)
			{
				if (arr[i][j] > 0) 
				{
					int count = 0;

					for (int k = 0; k < 4; k++)
					{
						if (arr[i + dx[k]][j + dy[k]] == 0)
							count++;
					}
					if (count != 0)
						arr[i][j] = count;
				}
			}
		}
		//erase cheese
		for (int i = 1; i < N - 1; i++)
		{
			for (int j = 1; j < M - 1; j++)
			{
				if (arr[i][j] >= 2)
					arr[i][j] = -1;
			}
		}
		time++;
		noCheese = true;
		for (int i = 1; i < N - 1; i++)
		{
			for (int j = 1; j < M - 1; j++)
			{
				if (arr[i][j] > 0)
				{
					noCheese = false;
					break;
				}
			}
			if (!noCheese)
				break;
		}
	}
	cout << time << "\n";
	return 0;

}
