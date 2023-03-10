#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

#define D 1234567891
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	string str;
	cin >> str;
	long long hashValue = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		long long current = str[i] - 'a' + 1;
		hashValue *= 31;
		hashValue %= D;
		hashValue += current;
		hashValue %= D;
	}
	cout << hashValue << "\n";
	return 0;

}