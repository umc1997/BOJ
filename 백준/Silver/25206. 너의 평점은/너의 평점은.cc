#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout << fixed;
	cout.precision(6);
	// input & assignment
	string s;
	double totalNum = 0;
	double totalPoint = 0;
	map<string, double> m;
	m.insert(make_pair("A+", 4.5));
	m.insert(make_pair("A0", 4.0));
	m.insert(make_pair("B+", 3.5));
	m.insert(make_pair("B0", 3.0));
	m.insert(make_pair("C+", 2.5));
	m.insert(make_pair("C0", 2.0));
	m.insert(make_pair("D+", 1.5));
	m.insert(make_pair("D0", 1.0));
	m.insert(make_pair("F", 0.0));
	// solution
	while (cin >> s) {
		double a;
		string p;
		cin >> a >> p;
		if (p != "P") totalNum += a;
		totalPoint += m[p] * a;
	}
	cout << (double)totalPoint / totalNum << '\n';
	
	// output
	
	return 0;
}