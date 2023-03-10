#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	vector<unsigned int> arr;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		unsigned int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	
	sort(arr.begin(), arr.end());
	cout << arr[0] * arr[N - 1] << endl;
	
	return 0;
}
