#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
bool check(unsigned int a)
{
	unsigned int sq = sqrt(a);
	return sq * sq == a;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int M, N;
	cin >> M >> N;
	unsigned int sum = 0;
	vector<unsigned int> squares;
	for (int i = M; i <= N; i++)
	{
		if (check(i))
			squares.push_back(i);
	}
	if (squares.empty())
		cout << -1 << "\n";
	else
	{
		for (int i = 0; i < squares.size(); i++)
			sum += squares[i];
		cout << sum << "\n" << squares[0] << "\n";
	}
	
	return 0;
}