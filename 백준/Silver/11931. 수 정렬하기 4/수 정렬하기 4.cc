#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	priority_queue <int, vector<int>, less<int>> q;
	while (N--)
	{
		int a;
		cin >> a;
		q.push(a);
	}
	while (!q.empty())
	{
		int a = q.top();
		q.pop();
		cout << a << "\n";
	}
	return 0;
}