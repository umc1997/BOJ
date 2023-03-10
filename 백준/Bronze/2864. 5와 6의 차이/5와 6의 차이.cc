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
	string a, b;
	cin >> a >> b;
	int mi;
	int ma;
	string minA = "", minB = "", maxA = "", maxB = "";
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '5')
		{
			maxA += '6';
			minA += '5';
		}
		else if (a[i] == '6')
		{
			maxA += '6';
			minA += '5';
		}
		else
		{
			maxA += a[i];
			minA += a[i];
		}
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] == '5')
		{
			maxB += '6';
			minB += '5';
		}
		else if (b[i] == '6')
		{
			maxB += '6';
			minB += '5';
		}
		else
		{
			maxB += b[i];
			minB += b[i];
		}
	}
	mi = stoi(minA) + stoi(minB);
	ma = stoi(maxA) + stoi(maxB);
	cout << mi << " " << ma << "\n";
	
	return 0;
}