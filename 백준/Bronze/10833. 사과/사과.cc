#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
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
	int sum = 0;
	while (N--)
	{
		int a, b;
		cin >> a >> b;
		sum += b % a;
	}
	cout << sum << "\n";
	return 0;
}