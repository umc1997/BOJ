#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int K;
	cin >> K;
	unsigned int sum = 0;
	stack<int> s;
	for (int i = 0; i < K; i++)
	{
		int a;
		cin >> a;
		if (a == 0)
			s.pop();
		else
			s.push(a);
	}
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	cout << sum << "\n";
	return 0;
}
