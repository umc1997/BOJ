#include <iostream>
#include <algorithm>

using namespace std;


int main() 
{
	int stair[310] = {};
	int D[310] = {};
	int num = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		int a = 0;
		cin >> a;
		stair[i] = a;
	}
	D[0] = 0;
	D[1] = stair[1];
	D[2] = stair[1] + stair[2];
	D[3] = max(stair[1] + stair[3], stair[2] + stair[3]);
	if (num <= 3)
	{
		cout << D[num] << endl;
		return 0;
	}
	for (int i = 4; i <= num; i++)
	{
		D[i] = max(D[i-3]+stair[i-1]+stair[i],D[i-2]+stair[i] );
	}
	cout << D[num] << endl;
	return 0;
}
