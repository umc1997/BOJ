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
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	

	int N;
	cin >> N;
	int sum = 0;
	string in;
	cin >> in;
	for (int t = 0; t < N; t++)
	{
		sum += char2int(in[t]);
	}
	cout << sum << endl;
}
