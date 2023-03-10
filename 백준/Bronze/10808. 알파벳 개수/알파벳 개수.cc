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
	int alpha[26] = { 0, };
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		alpha[input[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i] << " ";
	}
	cout << "\n";
	return 0;
}
