#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
bool comp(pair<long, long> a, pair<long, long> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long N;
	long cnt = 1;
	cin >> N;
	vector<pair<long, long>> time;
	for (int i = 0; i < N; i++)
	{
		long a, b;
		cin >> a >> b;
		time.push_back(pair<long, long>(a, b));
	}
	sort(time.begin(), time.end(), comp);
	long current = time[0].second;
	for (int i = 1; i < N; i++)
	{
		if (time[i].first >= current)
		{
			current = time[i].second;
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}

