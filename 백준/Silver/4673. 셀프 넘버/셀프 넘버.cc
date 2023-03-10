#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_set>
using namespace std;

bool d(int a, int b)
{
	if (a % b == 0)
		return true;
	else
		return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	unordered_set<int> notSelfNum;
	int a = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				for (int l = 0; l < 10; l++)
				{
					int a = i * 1001 + j * 101 + k * 11 + l * 2;
					if (a > 10000)
						continue;
					notSelfNum.insert(a);
				}
			}
		}
	}
	for (int i = 0; i < 10000; i++)
	{
		if (notSelfNum.count(i))
			continue;
		cout << i << endl;
	}
}
