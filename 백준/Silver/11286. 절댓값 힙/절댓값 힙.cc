#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>

using namespace std;
struct compare {
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b;
		return abs(a) > abs(b);
	}
};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	priority_queue<int, vector<int>, compare> PQ;
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		if (input == 0)
		{
			if (PQ.empty())
				cout << 0 << "\n";
			else
			{
				cout << PQ.top() << "\n";
				PQ.pop();
			}
		}
		else
			PQ.push(input);
	}
	return 0;	
}
