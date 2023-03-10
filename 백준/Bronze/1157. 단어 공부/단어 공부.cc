#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int alpha2int(char c)
{
	return c - 'a';
}
char int2alpha(int i)
{
	return i + 'a';
}
bool isCapital(char c)
{
	return ((c >= 65) && (c <= 90));
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int alpha[26] = { 0, };
	string in;
	cin >> in;
	for (int i = 0; i < in.size(); i++)
	{
		if (isCapital(in[i]))
			in[i] = in[i] + 32;
		
		alpha[alpha2int(in[i])]++;
	}
	int max = 0;
	char output;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > max)
		{
			max = alpha[i];
			output = int2alpha(i) - 32;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] == max)
			cnt++;
	}
	if (cnt != 1)
	{
		cout << "?\n";
	}
	else
	{
		string tmp = "";
		tmp += output;
		cout << tmp << "\n";
	}

}
