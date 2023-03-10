#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N, M;
	cin >> N >> M;
	unordered_map<int, string> num2Str;
	unordered_map<string, int> str2Num;
	for (int i = 1; i <= N; i++)
	{
		string input;
		cin >> input;
		num2Str.insert({ i,input });
		str2Num.insert({ input,i });
	}
	for (int i = 0; i < M; i++)
	{
		string input;
		cin >> input;
		if (input[0] >= 'A' && input[0] <= 'Z')
			cout << str2Num.at(input) << "\n";
		
		else
			cout << num2Str.at(stoi(input)) << "\n";
	}
	return 0;
}
