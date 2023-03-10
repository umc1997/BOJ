#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;
int time(int H, int M, int S)
{
	return (H * 60 + M) * 60 + S;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string a, b;
	cin >> a >> b;
	int times = time((b[0] - '0') * 10 + b[1] - '0', (b[3] - '0') * 10 + b[4] - '0', (b[6] - '0') * 10 + b[7] - '0');
	times -= time((a[0] - '0') * 10 + a[1] - '0', (a[3] - '0') * 10 + a[4] - '0', (a[6] - '0') * 10 + a[7] - '0'); 
	if (times <= 0)
		times += 86400;
	string output = "";
	output += (times / 3600 / 10 + '0');
	output += (times / 3600 % 10 + '0');
	times %= 3600;
	output += ":";
	output += (times / 60 / 10 + '0');
	output += (times / 60 % 10 + '0');
	times %= 60;
	output += ":";
	output += (times / 10 + '0');
	output += (times % 10 + '0');
	cout << output << "\n";
	return 0;
}