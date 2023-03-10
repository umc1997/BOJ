#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
bool comp(const string& s1, const string& s2)
{
	if (s1.size() == s2.size())
	{
		return s1 < s2;
	}
	return s1.size() < s2.size();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	vector<string> arr;
	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	vector<string>::iterator end;
	sort(arr.begin(), arr.end(), comp);

	end = unique(arr.begin(),arr.end());

	for (vector<string>::iterator iter = arr.begin(); iter != end; iter++)
	{
		cout << (*iter).c_str() << "\n";
	}
	return 0;
}
