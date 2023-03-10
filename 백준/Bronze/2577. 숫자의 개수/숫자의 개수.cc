#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int A, B, C;
	cin >> A >> B >> C;
	unsigned int K = A * B * C;
	int a[10] = { 0, };
	while (K != 0)
	{
		int c = K % 10;
		a[c] ++;
		K /= 10;
	}
	for (int i = 0; i <= 9; i++)
		cout << a[i] << "\n";
}
