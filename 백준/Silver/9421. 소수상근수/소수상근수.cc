#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int isSang[1000100];
bool isPrime[1000100];
int loop(int i)
{
	int result = 0;
	while (i)
	{
		result += (i % 10) * (i % 10);
		i /= 10;
	}
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(isSang, -1, 1000100);
	memset(isPrime, true, 1000100);

	int n;
	cin >> n;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (!isPrime[i]) continue;
		isPrime[i] = true;
		for (int j = 2; j * i <= n; j++)
			isPrime[i * j] = false;
	}
	for (int i = 2; i < n; i++)
	{
		if (isPrime[i])
		{
			vector<int> v;
			bool flag = true;
			int tmp = i;
			do {
				v.push_back(tmp);
				tmp = loop(tmp);
				if (isSang[tmp] == 0)
				{
					flag = false;
					break;
				}
				if (find(v.begin(), v.end(), tmp) != v.end())
				{
					flag = false;
					for (int k = 0; k < v.size(); k++)
					{
						isSang[v[k]] = 0;
					}
					break;
				}
			} while (tmp != 1);
			if (flag) {
				for (int k = 0; k < v.size(); k++)
				{
					isSang[v[k]] = 1;
				}
			}
		}
	}
	for (int i = 2; i < n; i++)
	{
		if (isPrime[i] && isSang[i] == 1)
			cout << i << "\n";
				
	}
}
