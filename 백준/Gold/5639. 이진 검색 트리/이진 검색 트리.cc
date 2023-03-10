#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int s = 0;
int node[10010];
void invert(int start, int end)
{
	if (start >= end) return;
	if (start == end - 1)
	{
		cout << node[start] << '\n';
		return;
	}
	int p = node[start];
	int q = start + 1;
	while (node[q] < p && q < end)
		q++;

	invert(start + 1 , q);
	invert(q, end);
	cout << node[start] << '\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int input = 1;
	s = 0;
	while (cin >> input) {
		node[s] = input;
		s++;
	}
	invert(0, s);

	return 0;
}
