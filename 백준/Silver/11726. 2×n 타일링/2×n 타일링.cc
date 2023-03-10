#include <iostream>
#include <string>

using namespace std;

int main()
{
	int DP[1010] = {-1,};
	int n=0;
	DP[0] = 1;
	DP[1] = 1;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
	}
	cout << DP[n] % 10007<<endl;
	return 0;

	
}