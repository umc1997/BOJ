#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <unordered_map>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N >> M;
	unordered_map<string, string> passwordMap;
	for (int i = 0; i < N; i++)
	{
		string site, password;
		cin >> site >> password;
		passwordMap.insert({ site, password });
	}
	for (int i = 0; i < M; i++)
	{
		string check;
		cin >> check;
		cout << passwordMap.at(check) << "\n";
	}
	
	return 0;	
}
