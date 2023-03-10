#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
bool comp(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b)
{
	if (a.first.first == b.first.first)
		return a.second < b.second;
	return a.first.first < b.first.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	vector<pair<pair<int,string>,int>> arr;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		string tmpp;
		cin >> tmp >> tmpp;
		pair<int, string> p = make_pair(tmp, tmpp);
		arr.push_back(pair<pair<int, string>, int>(p,i));
	}
	sort(arr.begin(), arr.end(), comp);
	for (int i = 0; i < N; i++)
	{
		cout << arr[i].first.first << " " << arr[i].first.second << "\n";
	}
	
	return 0;
}
