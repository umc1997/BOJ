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
	string b;
	cin >> b;
	int size = b.size();
	string output = "";
	if (b == "0")
		output += "0";
	int sum = 0;
	for (int i = size - 1; i >= 0; i--)
	{
		if ((size - i - 1) % 3 == 0)
		{
			sum += b[i] - '0';
		}
		else if ((size - i - 1) % 3 == 1)
		{
			sum += (b[i] - '0') * 2;
		}
		else
		{
			sum += (b[i] - '0') * 4;
			output += to_string(sum);
			sum = 0;
		}
	}
	if (sum != 0)
		output += to_string(sum);
	reverse(output.begin(),output.end());
	cout << output << "\n";
	return 0;

}