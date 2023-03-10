#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		b = N / 2;
		a = N - b;
		for (int j = 0; j < a; j++)
			cout << "* ";
		cout << "\n";
		for (int j = 0; j < b; j++)
			cout << " *";
		cout << "\n";
	}
}
