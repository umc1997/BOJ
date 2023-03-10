#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

char chess[8][8];
int count(char a[][8])
{
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (a[i][j] != chess[i][j])
				cnt++;
		}
	}
	return cnt;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N >> M;

	char input[60][60];
	char c;
	vector<int> result;
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
		{
			c = 'B';
		}
		else
		{
			c = 'W';
		}
		for (int j = 0; j < 8; j++)
		{
			chess[i][j] = c;
			if (c == 'B') c = 'W';
			else c = 'B';
		}
	}
	unsigned int cnt = 0;
	cin.get();
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			char a;
			a = cin.get();
			if (a == '\n')
				a = cin.get();
			input[i][j] = a;
		}
	}
	for (int i = 0; i < N - 7; i++)
	{
		for (int j = 0; j < M - 7; j++)
		{
			int tmp;
			char candi[8][8];
			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					candi[k][l] = input[i + k][j + l];
				}
			}
			tmp = count(candi);
			result.push_back(min(tmp, 64 - tmp));
		}
	}
	sort(result.begin(), result.end());
	cout << result[0] << "\n";
	return 0;
}
