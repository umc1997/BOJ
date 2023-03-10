#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	int x = 1;
	int y = 0;
	while (N > x)
	{
		N -= x;
		x++;
	}
	y = N;
	string output = "";
	if (x % 2 == 1)
	{
		x++;
		output.append(to_string(x - y));
		output.append("/");
		output.append(to_string(y));
	}
	else
	{
		x++;
		output.append(to_string(y));
		output.append("/");
		output.append(to_string(x - y));
	}
	cout << output << endl;
	return 0;
}
