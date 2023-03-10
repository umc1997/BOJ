#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> a;
	for (int i = 0; i < 10; i++)
	{
		int A;
		cin >> A;
		A %= 42;
		a.push_back(A);
	}
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	cout << a.size() << "\n";
}
