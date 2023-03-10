#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int arr[10];
bool visited[10];
vector<int> v;
int N, M;
void bt(int d)
{
	if (d == M) {
		for (int i = 0; i < M; i++)
			cout << v[i] << " ";
		cout << "\n";
		return;
	}
	int check = 0;
	for (int i = 0; i < N; i++)
	{
		if (visited[i]) continue;
		if (arr[i] == check)continue;
		visited[i] = 1;
		check = arr[i];
		v.push_back(arr[i]);
		bt(d + 1);
		v.pop_back();
		visited[i] = 0;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);

	bt(0);

	return 0;

}