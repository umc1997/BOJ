#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		unsigned int N, M;
		cin >> N >> M;
		queue<pair<int, int>> que;
		int arr[110];
		for (int i = 0; i < N; i++)
		{
			int a; 
			cin >> a;
			que.push(make_pair(i, a));
			arr[i] = a;
		}
		sort(arr, arr + N);
		reverse(arr, arr + N);
		int cnt = 0;
		while (!que.empty())
		{
			pair<int,int> current = que.front();
			que.pop();
			if (current.second != arr[cnt])
			{
				que.push(current);
				continue;
			}
			cnt++;
			if (current.first == M)
				break;
		}
		cout << cnt << "\n";
	}
	return 0;	
}
