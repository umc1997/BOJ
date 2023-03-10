#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int char2int(char c)
{
	return c - '0';
}
char int2char(int i)
{
	return i + '0';
}
char int2alpha(int i)
{
	return i + 'a';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int alpha[26];
	string in;
	cin >> in;
	for (int i = 0; i < 26; i++)
	{
		if (in.find_first_of(int2alpha(i)) == string::npos)
			alpha[i] = -1;
		else
			alpha[i] = in.find_first_of(int2alpha(i));
		
		
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i] << " ";
	}
}
