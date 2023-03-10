#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <queue>
#include <cstring>

using namespace std;
bool visited[10010] = { false, };
int D(int A)
{
	return A * 2 % 10000;
}
int S(int A)
{
	if (A == 0)
		return 9999;
	return A - 1;
}
int L(int A)
{
	int d1, d2, d3, d4;
	d1 = A / 1000;
	A %= 1000;
	d2 = A / 100;
	A %= 100;
	d3 = A / 10;
	A %= 10;
	d4 = A;
	return d2 * 1000 + d3 * 100 + d4 * 10 + d1;
}
int R(int A)
{
	int d1, d2, d3, d4;
	d1 = A / 1000;
	A %= 1000;
	d2 = A / 100;
	A %= 100;
	d3 = A / 10;
	A %= 10;
	d4 = A;
	return d4 * 1000 + d1 * 100 + d2 * 10 + d3;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		memset(visited, false, sizeof(visited));
		int A, B;
		cin >> A >> B;
		queue<pair<int, string>> DSLR;
		DSLR.push(make_pair(A, ""));
		string output;
		while (!DSLR.empty())
		{
			int currentNum = DSLR.front().first;
			string currentCmd = DSLR.front().second;
			if (currentNum == B)
			{
				output = currentCmd;
				break;
			}
			DSLR.pop();

			if (!visited[D(currentNum)])
			{
				visited[D(currentNum)] = true;
				DSLR.push(make_pair(D(currentNum), currentCmd + "D"));
			}
			if (!visited[S(currentNum)])
			{
				visited[S(currentNum)] = true;
				DSLR.push(make_pair(S(currentNum), currentCmd + "S"));
			}
			if (!visited[L(currentNum)])
			{
				visited[L(currentNum)] = true;
				DSLR.push(make_pair(L(currentNum), currentCmd + "L"));
			}
			if (!visited[R(currentNum)])
			{
				visited[R(currentNum)] = true;
				DSLR.push(make_pair(R(currentNum), currentCmd + "R"));
			}
		}
		cout << output << "\n";
	}
	return 0;
}
