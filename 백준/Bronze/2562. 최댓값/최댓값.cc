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
	int max = 0;
	int idx = 0;
	for (int i = 1; i <= 9; i++)
	{
		int A;
		cin >> A;
		if (A > max)
		{
			max = A;
			idx = i;
		}
	}
	cout << max << "\n" << idx << "\n";
}
