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
	string s;
	cin >> s;
	int sum = 0;
	sum += 10;
	int size = s.size();
	for (int i = 1; i < size; i++)
	{
		if (s[i] == s[i - 1])
			sum += 5;
		else
			sum += 10;
	}
	cout << sum << "\n";
	
	return 0;
}