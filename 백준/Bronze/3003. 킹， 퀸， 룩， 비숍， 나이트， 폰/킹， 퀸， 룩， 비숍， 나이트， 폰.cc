#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int chess[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++)
	{
		int in;
		cin >> in;
		cout << chess[i] - in << " ";
	}
	cout << "\n";
	
	
	return 0;
}

