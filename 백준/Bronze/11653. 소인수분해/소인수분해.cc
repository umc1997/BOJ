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

	unsigned int N;
	cin >> N;
	for (int i = 2; N > 1;)
	{
		if (N % i == 0)
		{
			cout << i << "\n";
			N /= i;
		}
		else
			i++;
			
	}
	return 0;
}
