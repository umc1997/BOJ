#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int matrix[110][110];
int A[110][110];
int B[110][110];
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M, K;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> A[i][j];
		}
	}
	cin >> M >> K;
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= K; j++)
		{
			cin >> B[i][j];
		}
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= K; j++)
		{
			int sum = 0;
			for (int k = 1; k <= M; k++)
			{
				sum += A[i][k] * B[k][j];
			}
			matrix[i][j] = sum;
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;	
}
