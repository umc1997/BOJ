#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int n;
long long cnt = 0;
int chess[20] = { -1, };
bool isPromise(int idx ,int num)
{
	for (int i = 0; i < idx; i++)
	{
		if (num == chess[i])
			return false;
		if (abs(idx - i) == abs(num - chess[i]))
			return false;
	}
	return true;
}
void nQueen(int idx)
{
	if (idx == n)
	{
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (isPromise(idx, i))
		{
			chess[idx] = i;
			nQueen(idx + 1);
			chess[idx] = -1;
		}
	}
	

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;

	nQueen(0);

	cout << cnt << "\n";
	
	return 0;
}
