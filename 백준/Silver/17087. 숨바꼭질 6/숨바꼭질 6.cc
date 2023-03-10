#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <cstring>
#include <queue>
#define ABS(a,b) (a>b? a-b:b-a)
using namespace std;

unsigned int gcd(unsigned int a, unsigned int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
unsigned int arr[100010];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, S;
	cin >> N >> S;
	queue<unsigned int> Q;
	for (int i = 0; i < N; i++)
	{
		unsigned int a;
		cin >> a;
		Q.push(ABS(a, S));
	}
	while (Q.size() != 1)
	{
		unsigned int A, B;
		A = Q.front();
		Q.pop();
		B = Q.front();
		Q.pop();
		Q.push(gcd(A, B));
	}
	cout << Q.front() << "\n";
	return 0;
}