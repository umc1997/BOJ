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
	for (int i = 0; i < N; i++)
	{
		vector<int> a;
		string input;
		cin >> input;
		int k = 0;
		int sum = 0;
		for (int j = 0; j < input.size(); j++)
		{
			char c = input[j];
			if (c == 'O')
				k++;
			else
				k = 0;
			a.push_back(k);
		}
		for (int j = 0; j < a.size(); j++)
			sum += a[j];
		cout << sum << "\n";
	}

}
