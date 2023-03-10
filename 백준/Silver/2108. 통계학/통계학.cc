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
	cin >> N;
	vector<int> arr;
	vector<int> tmp;
	int count[8010] = { 0, };
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);
		count[a + 4000]++;
	}
	sort(arr.begin(), arr.end());
	int m = -1;
	for (int i = 0; i < 8010; i++)
	{
		if (count[i] > m)
			m = count[i];
	}
	for (int i = 0; i < 8010; i++)
	{
		if (count[i] == m)
			tmp.push_back(i - 4000);
	}
	sort(tmp.begin(), tmp.end());
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}
	int result = round((double)sum / N);
	if (result == -0)
	    result = 0;
	cout << result << "\n";
	cout << arr[N / 2] << "\n";
	if (tmp.size() == 1)
		cout << tmp[0] << "\n";
	else
		cout << tmp[1] << "\n";
	cout << arr[N - 1] - arr[0] << "\n";
}
