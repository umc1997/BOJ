#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
bool comp1(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}
bool comp2(pair<int, int> a, pair<int, int> b)
{
	return a.first < b.first;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	vector <pair<int, int>> v;
	for (int i = 0; i < N; i++)
	{
		int in;
		cin >> in;
		v.push_back(make_pair(i, in));
	}
	sort(v.begin(), v.end(), comp1);
	int current = v[0].second;
	int cnt = 0;
	v[0].second = 0;
	for (int i = 1; i < N; i++)
	{
		if (current == v[i].second)
		{
			v[i].second = cnt;
		}
		else
		{
			cnt++;
			current = v[i].second;
			v[i].second = cnt;
		}
	}
	sort(v.begin(), v.end(), comp2);
	for (int i = 0; i < N; i++)
	{
		cout << v[i].second << " ";
	}
	cout << "\n";
	return 0;	
}
