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
	priority_queue<int, vector<int>, less<int>> firstHalf;
	priority_queue<int, vector<int>, greater<int>> secondHalf;
	int mid;
	cin >> mid;
	cout << mid << "\n";
	for (int i = 1; i < N; i++)
	{
		int input;
		cin >> input;
		if (input >= mid)
			secondHalf.push(input);
		else
			firstHalf.push(input);

		if (firstHalf.size() >= secondHalf.size() + 1)
		{
			secondHalf.push(mid);
			mid = firstHalf.top();
			firstHalf.pop();
		}
		if (secondHalf.size() > firstHalf.size() + 1)
		{
			firstHalf.push(mid);
			mid = secondHalf.top();
			secondHalf.pop();
		}
		cout << mid << "\n";
	}
	return 0;	
}
