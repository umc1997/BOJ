#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string input = "";

	cin >> input;

	string a = "", b = "", c = "";
	int dot = input.find('.');
	int start = input.find('(');
	int end = input.find(')');
	long long up = 0;
	long long down = 0;

	if (dot != string::npos) {
		if (start != string::npos)
		{
			a = input.substr(0, dot);
			if (dot + 1 != start)
				b = input.substr(dot + 1, start - 1 - dot);
			c = input.substr(start + 1, end - 1 - start);

			up = stoll(a + b + c) - stoll(a + b);
			down = 0;
			for (int i = 0; i < c.size(); i++)
			{
				down *= 10;
				down += 9;
			}
			for (int i = 0; i < b.size(); i++)
			{
				down *= 10;
			}
		}
		else
		{
			a = input.substr(0, dot);
			b = input.substr(dot + 1);
			down = pow(10, b.size());
			up = stoll(b) + down * stoll(a);
		}
		int d = gcd(up, down);
			up /= d;
			down /= d;
	}
	else
	{
		up = stoll(input);
		down = 1;
	}
	cout << up << "/" << down << '\n';
	return 0;
}
