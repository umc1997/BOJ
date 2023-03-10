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
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string output = "";
	int Asize = a.size();
	int Bsize = b.size();
	int carry = 0;
	int size1 = min(Asize, Bsize);
	int size2 = max(Asize, Bsize);
	bool isAbigger = Asize > Bsize;
	for (int i = 0; i <size1 ; i++)
	{
		int k = a[i] + b[i] - '0' - '0';
		k += carry;
		carry = k / 10;
		k %= 10;
		output += (k + '0');
	}
	for (int i = size1; i < size2; i++)
	{
		int k;
		if (isAbigger)
		{
			k = a[i] - '0';
			k += carry;
			carry = k / 10;
			k %= 10;
			output += (k + '0');
		}
		else
		{
			k = b[i] - '0';
			k += carry;
			carry = k / 10;
			k %= 10;
			output += (k + '0');
		}
	}
	if (carry)
		output += (carry + '0');
	reverse(output.begin(), output.end());
	cout << output << "\n";
	return 0;
}