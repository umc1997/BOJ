#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;
	unsigned int x1 = min({A, B, C});
	unsigned int x2 = min(D, E);
	cout << (x1 + x2 - 50) << "\n";
}