#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long A, B;
	cin >> A >> B;
	queue<pair<long long, int>> Q;
	int cnt = -1;
	Q.push(make_pair(B, 0));
	while(!Q.empty())
	{
		int currentNum = Q.front().first;
		int currentCnt = Q.front().second;
		if (A == currentNum)
		{
			cnt = currentCnt;
			break;
		}
		Q.pop();
		int units = currentNum % 10;
		if (units == 3 || units == 7 || units == 5 || units == 9)
			break;
		else if (units == 1 && currentNum >= 10)
			Q.push(make_pair(currentNum / 10, currentCnt + 1));
		else {
			if(currentNum >= 2)
				Q.push(make_pair(currentNum / 2, currentCnt + 1));
		}
	}
	
	if (cnt != -1)
		cnt++;
	cout << cnt << "\n";
	return 0;
}