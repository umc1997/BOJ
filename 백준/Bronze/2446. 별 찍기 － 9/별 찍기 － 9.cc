#include <iostream>
#include <string>
using namespace std;

string star(int x, int y);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << star(N * 2 - 1, i) << "\n";
	}
	for (int i = 1; i < N; i++)
	{
		cout << star(N * 2 - 1, N - i - 1) << "\n";
	}
}
string star(int x, int y)
{
	string result = "";
	for (int i = 0; i < y; i++)
		result.append(" ");
	for (int i = 0; i < x-y*2; i++)
		result.append("*");
	//for (int i = 0; i < y; i++)
	//	result.append(" ");
	return result;
}