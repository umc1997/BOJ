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

	while (cin >> input)
	{
		string a, b, c;
		int dot = input.find('.');
		int start = input.find('(');
		int end = input.find(')');

		a = input.substr(0, dot);
		if (dot + 1 !=start)
			b = input.substr(dot + 1, start - 1 - dot);
		c = input.substr(start + 1, end - 1 - start);

		int up = stoi(a + b + c) - stoi(a + b);
		int down = 0;
		for (int i = 0; i < c.size(); i++)
		{
			down *= 10;
			down += 9;
		}
		for (int i = 0; i < b.size(); i++)
		{
			down *= 10;
		}
		int d = gcd(up, down);
		up /= d;
		down /= d;
		cout << input << " = " << up << " / " << down << '\n';


	}

	

}
