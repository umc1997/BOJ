#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void hanoi(int from, int to, int other, int num)
{
	if (num == 0)
		return;
	else
	{
		hanoi(from, other, to, num - 1);
		cout << from << " " << to << "\n";
		hanoi(other, to, from, num - 1);
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	unsigned int N;
	cin >> N;
	unsigned int result = pow(2, N) - 1;
	cout << result << "\n";
	
	hanoi(1, 3, 2, N);

	return 0;
}
