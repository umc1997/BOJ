#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	unsigned int N, X;
	cin >> N >> X;
	for (int i = 1; i <= N; i++)
	{
		int A;
		cin >> A;
		if (A < X)
			cout << A << " ";
	}
}