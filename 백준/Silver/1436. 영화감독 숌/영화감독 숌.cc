#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

bool isEnd(unsigned int i)
{
	string s = to_string(i);
	if (s.find("666") != string::npos)
		return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	unsigned int cnt = 0;
	unsigned int number = 0;
	while (N != cnt)
	{
		number++;
		if (isEnd(number))
			cnt++;
	}
	cout << number << "\n";
	return 0;
}
