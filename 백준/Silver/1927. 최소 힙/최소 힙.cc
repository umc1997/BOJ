#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	priority_queue<long long, vector<long long>, greater<long long>> maxHeap;
	for (int i = 0; i < N; i++)
	{
		long long a;
		cin >> a;
		if (a == 0)
		{
			if (maxHeap.empty())
				cout << 0 << "\n";
			else
			{
				cout << maxHeap.top() << "\n";
				maxHeap.pop();
			}
		}
		else
		{
			maxHeap.push(a);
		}
	}
	return 0;	
}
