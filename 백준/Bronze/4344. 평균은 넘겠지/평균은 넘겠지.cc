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
	unsigned int C;
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		int N;
		cin >> N;
		int sum = 0;
		vector<double> k;
		for (int j = 0; j < N; j++)
		{
			double a;
			cin >> a;
			sum += a;
			k.push_back(a);
		}
		int aver = sum / N;
		int cnt = 0;
		for (int j = 0; j < N; j++)
		{
			if (k[j] > aver)
			{
				cnt++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << 100 * cnt / (double)N << "%" << "\n";
	}

}
