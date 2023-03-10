#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	cout << a[1] << "\n";
}