#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_map>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int result = 0;
	int date;
	cin >> date;
	for (int i = 0; i < 5; i++)
	{
		int a;
		cin >> a;
		if (a == date)
			result++;
	}
	cout << result << "\n";
	return 0;
}
