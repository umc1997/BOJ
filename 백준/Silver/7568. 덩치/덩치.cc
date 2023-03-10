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
	
	unsigned int N;
	cin >> N;
	int input[60][2];
	int result[60];
	for (int i= 0; i < N; i++)
	{
		unsigned int x, y = 0;
		cin >> x >> y;
		input[i][0] = x;
		input[i][1] = y;
	}
	for (int i = 0; i < N; i++)
	{
		int cnt = 0;
		for (int j = 0; j < N; j++)
		{
			if ((input[i][0] < input[j][0]) && (input[i][1] < input[j][1]))
			{
				cnt++;
			}
		}
		result[i] = cnt;
	}
	for (int i = 0; i < N; i++)
	{
		cout << result[i] + 1 << " ";
	}
	cout << "\n";
	return 0;
}
