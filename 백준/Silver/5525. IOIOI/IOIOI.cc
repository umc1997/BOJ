#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N >> M;
	string line;
	cin >> line;
	vector<int> index;
	vector<int> v;
	for (int i = 0; i < M; i++)
	{
		if (line[i] == 'I')
			index.push_back(i);
	}
	int size = index.size();
	if (size == 0)
	{
		cout << 0 << "\n";
		return 0;
	}
	int current = index[0];
	int cnt = 0;
	for (int i = 1; i < size; i++)
	{
		if (index[i] == current + 2)
		{
			current = index[i];
			cnt++;
		}
		else
		{
			if(cnt != 0)
				v.push_back(cnt);
			current = index[i];
			cnt = 0;
		}
	}
	if(cnt != 0)
		v.push_back(cnt);
	int result = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] >= N)
			result += v[i] - N + 1;
	}
	cout << result << "\n";
	return 0;
}