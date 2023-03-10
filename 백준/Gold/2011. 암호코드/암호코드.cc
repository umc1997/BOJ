#include <iostream>
#include <string>
using namespace std;

#define mod 1000000

int main() 
{
	int code[5001];
	int codeSize;
	int D[5010] = {};
	D[0] = 1;
	D[1] = 1;
	string c;
	cin >> c;
	codeSize = c.size();
	for (int i = 0; i < codeSize; i++)
	{
		code[i] = c.at(i)-'0';
	}
	if (code[0] == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	for (int i = 2; i <= codeSize; i++)
	{
		if (code[i-1] != 0)
		{
			D[i] = (D[i] + D[i - 1]) % mod;
		}
		int a = code[i - 2] * 10 + code[i-1];
		if (10 <= a&&a <= 26)
		{
			D[i] = (D[i] + D[i - 2]) % mod;
		}
	}
	cout << D[codeSize] << endl;
	return 0;
}
