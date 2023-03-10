#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>


using namespace std;

string otob(char o)
{
	if (o == '0')
		return "000";
	else if (o == '1')
		return "001";
	else if (o == '2')
		return "010";
	else if (o == '3')
		return "011";
	else if (o == '4')
		return "100";
	else if (o == '5')
		return "101";
	else if (o == '6')
		return "110";
	else if (o == '7')
		return "111";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string b;
	cin >> b;
	int size = b.size();
	string output = "";
	if (b == "0")
	{
		cout << 0 << "\n";
		return 0;
	}
	for (int i = 0; i < size; i++)
	{
		string a = otob(b[i]);
		if (i == 0)
		{
			if (a[0] == '0')
			{
				if (a[1] == '0')
				{
					output += a.substr(2, 1);
				}
				else
				{
					output += a.substr(1, 2);
				}
			}
			else
			{
				output += a;
			}
		}
		else
		{
			output += a;
		}

	}

	cout << output << "\n";
	return 0;

}