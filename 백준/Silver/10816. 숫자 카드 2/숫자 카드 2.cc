#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
#define D 10000000
int has[20000010] = { 0, };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		has[a + D]++;
	}
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int a;
		cin >> a;
		cout << has[a + D] << " ";
	}
	cout << "\n";

	return 0;	
}
