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
	int N;
	cin >> N;
	N /= 4;
	// output
	for (int i = 0; i < N; i++)cout << "long ";
	cout << "int\n";

	return 0;
}