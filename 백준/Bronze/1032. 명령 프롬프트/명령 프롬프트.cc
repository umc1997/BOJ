#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int arr[310][310];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	string output;
	cin >> output;
	for (int i = 0; i < N - 1; i++)
	{
		string input;
		cin >> input;
		for (int j = 0; j < output.size(); j++)
		{
			if (output[j] != input[j])
			{
				output[j] = '?';
			}
		}
	}
	cout << output << "\n";
	
	return 0;
}
