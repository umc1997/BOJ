#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>

using namespace std;
string A[500001];
string output[500001];
bool comp(string& a, string& b)
{
	return a < b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	sort(A, A + N, comp);
	int cnt = 0;
	for (int i = 0; i < M; i++)
	{
		string cur;
		cin >> cur;
		int left = 0;
		int right = N - 1;
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (A[mid] == cur)
			{
				output[cnt] = cur;
				cnt++;
				break;
			}
			else if (A[mid] > cur)
				right = mid - 1;
			else
				left = mid + 1;
		}
	}
	sort(output, output + cnt, comp);
	cout << cnt << "\n";
	for (int i = 0; i < cnt; i++)
		cout << output[i] << "\n";
	return 0;	
}
