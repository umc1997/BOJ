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
	
	unsigned int N, M;
	cin >> N >> M;
	vector<int> cards;
	vector<int> sums;
	for (int i = 0; i < N; i++)
	{
		unsigned int a;
		cin >> a;
		cards.push_back(a);
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sums.push_back(cards[i] + cards[j] + cards[k]);
			}
		}
	}
	sort(sums.begin(), sums.end());
	unsigned int max = 0;
	for (int i = 0; i < sums.size(); i++)
	{
		if (sums[i] > max && sums[i] <= M)
			max = sums[i];
	}
	cout << max << endl;
	return 0;
}
