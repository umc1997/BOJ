#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int A[100010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	sort(A, A + N);
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int target;
		cin >> target;
		int left = 0;
		int right = N - 1;
		bool find = false;
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (A[mid] == target)
			{
				find = true;
				break;
			}
			else if (A[mid] > target)
				right = mid - 1;
			else
				left = mid + 1;
		}
		cout << find << "\n";
	}
	return 0;	
}
