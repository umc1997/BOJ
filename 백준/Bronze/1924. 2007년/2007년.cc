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
	unsigned int x, y;
	cin >> x >> y;
	unsigned int days = 0;
	unordered_map<int, string> day = { {0,"SUN"},{1,"MON"},{2,"TUE"},{3,"WED"},{4,"THU"},{5,"FRI"},{6,"SAT"} };
	for (int i = 1; i < x; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			days += 31;
		}
		else if (i == 2)
		{
			days += 28;
		}
		else
		{
			days += 30;
		}
	}
	days += y;
	days %= 7;

	cout << day.at(days) << "\n";

	return 0;
}