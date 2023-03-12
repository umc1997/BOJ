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

	// input & assignment
	int a, b, c;
	int A, B;
	cin >> a >> b >> c;
	A = a * 3 + b * 2 + c;
	cin >> a >> b >> c;
	B = a * 3 + b * 2 + c;
	// output
	if (A == B) cout << "T\n";
	else if (A > B) cout << "A\n";
	else cout << "B\n";

	return 0;
}