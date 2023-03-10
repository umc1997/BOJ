#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_map>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unordered_map<string, pair<int, long>> color = {
		{"black", pair<int,int>(0,1)},
		{"brown", pair<int,int>(1,10)},
		{"red", pair<int,int>(2,100)},
		{"orange", pair<int,int>(3,1000)},
		{"yellow", pair<int,int>(4,10000)},
		{"green", pair<int,int>(5,100000)},
		{"blue", pair<int,int>(6,1000000)},
		{"violet", pair<int,int>(7,10000000)},
		{"grey", pair<int,int>(8,100000000)},
		{"white", pair<int,int>(9,1000000000)}
	};
	string a, b, c;
	cin >> a >> b >> c;
	long long result = color.at(a).first * 10 + color.at(b).first;
	result *= color.at(c).second;
	cout << result << "\n";
	return 0;
}
