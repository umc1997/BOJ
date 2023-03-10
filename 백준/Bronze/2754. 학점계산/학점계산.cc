#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>

using namespace std;
map<string, string> m; 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s = "";
	cin >> s;
	m.insert(pair<string, string>("A+", "4.3"));
	m.insert(pair<string, string>("A0", "4.0"));
	m.insert(pair<string, string>("A-", "3.7"));
	m.insert(pair<string, string>("B+", "3.3"));
	m.insert(pair<string, string>("B0", "3.0"));
	m.insert(pair<string, string>("B-", "2.7"));
	m.insert(pair<string, string>("C+", "2.3"));
	m.insert(pair<string, string>("C0", "2.0"));
	m.insert(pair<string, string>("C-", "1.7"));
	m.insert(pair<string, string>("D+", "1.3"));
	m.insert(pair<string, string>("D0", "1.0"));
	m.insert(pair<string, string>("D-", "0.7"));
	m.insert(pair<string, string>("F", "0.0"));

	cout << m[s] << endl;

	return 0;
}