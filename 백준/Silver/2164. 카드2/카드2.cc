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
	unsigned int N;
	cin >> N;
	queue<int> qu;
	for (int i = 1; i <= N; i++)
	{
		qu.push(i);
	}
	while (qu.size() != 1)
	{
		qu.pop();
		int a = qu.front();
		qu.pop();
		qu.push(a);
	}
	cout << qu.front() << "\n";
	return 0;	
}
