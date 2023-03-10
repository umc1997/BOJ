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
	int testCase;
	cin >> testCase;
	for (int t = 0; t < testCase; t++)
	{
		int R;
		string S;
		cin >> R >> S;
		string output = "";
		for (int i = 0; i < S.size(); i++)
		{
			for (int j = 0; j < R; j++)
			{
				string tmp = "";
				tmp += S[i];
				output.append(tmp);
			}
		}
		cout << output << "\n";
	}
}
