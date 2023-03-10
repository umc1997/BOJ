#include <iostream>
#include <queue>

using namespace std;

int arr[100010];// input
bool visited[100010];// 방문 여부
int in[100010];// 진입차수
int testCase;
int n;

int main()
{

	cin >> testCase;
	for (int t = 0; t < testCase; t++)
	{

		cin >> n;
		int now = 0;
		int result = 0;
		for (int i = 1; i <= n; i++)
		{
			in[i] = 0;
			visited[i] = false;
		}
		for (int i = 1; i <= n; i++)
		{
			int a;
			cin >> a;
			arr[i] = a;
			in[a]++;
		}
		for (int i = 1; i <= n; i++)
		{
			now = i;
			while (!in[now] && !visited[now])
			{
				visited[now] = true;
				in[arr[now]]--;
				now = arr[now];
				result++;
			}
		}
		cout << result << endl;
	}
	return 0;
}