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
	unsigned int N;
	cin >> N;
	vector<int> a;
	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		a.push_back(A);
	}
	sort(a.begin(), a.end());
	cout << a[0] << " " << a[N - 1] << "\n";
}
