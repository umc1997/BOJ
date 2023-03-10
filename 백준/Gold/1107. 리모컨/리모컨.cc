#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <vector>
#include <climits>
#include <cstring>
#define MIN(a,b) (a>b ? b:a)

using namespace std;
bool number[10] = { true, };
int getDigit(int in)
{
	if (in == 0) return 1;
	return log10(in) + 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < 10; i++)
	{
		number[i] = true;
	}
	queue<int> Q;
	for (int i = 0; i < M; i++)
	{
		int a;
		cin >> a;
		number[a] = false;
	}
	int result = abs(N - 100);
	for (int i = 0; i < 10; i++) {
		if (number[i]) {
			result = MIN(result, abs(N-i) + getDigit(i));
			Q.push(i);
		}
	}
	bool flag = false;
	int nextNum = 0;
	while (!Q.empty())
	{
		int currentNum = Q.front();
		result = MIN(result, abs(currentNum - N) + getDigit(currentNum));
		Q.pop();
		for (int i = 0; i < 10; i++)
		{
			if (number[i])
			{
				nextNum = currentNum * 10 + i;
				if (nextNum != 0)
					Q.push(nextNum);
			}
			if (nextNum > N)
			{
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	while (!Q.empty())
	{
		int currentNum = Q.front();
		Q.pop();
		result = MIN(result, abs(currentNum - N) + getDigit(currentNum));
	}
	
	cout << result << "\n";
	return 0;
}