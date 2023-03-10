#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
char ROT13(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 13;
		if (c < 'a')
			c += 26;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c -= 13;
		if (c < 'A')
			c += 26;
	}
	return c;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string N;
	getline(cin, N);
	string output = "";
	for (int i = 0; i < N.size(); i++)
	{
		output += ROT13(N[i]);
	}
	cout << output;
	return 0;	
}
