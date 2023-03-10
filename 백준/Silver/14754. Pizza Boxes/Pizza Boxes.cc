#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
		int n, m;
		vector<int> pizzas(1000010);
		vector<int> highest(1000010);
		int cnt = 0;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			int max = 0;
			int x, y;
			for (int j = 0; j < m; j++)
			{
				int a;
				cin >> a;
				pizzas[m*i + j] = a;
				if (a > max)
				{
					max = a;
					x = i;
					y = j;
				}
			}
			highest[m*x + y] = pizzas[m*x + y];
		}
		for (int i = 0; i < m; i++)
		{
			int max = 0;
			int x, y = 0;
			for (int j = 0; j < n; j++)
			{
				if (pizzas[m*j + i] > max)
				{
					max = pizzas[m*j + i];
					x = j;
					y = i;
				}
			}
			highest[m*x + y] = pizzas[m*x + y];
		}
		unsigned long r1 = 0;
		unsigned long r2 = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				r1 += pizzas[m*i + j];
				r2 += highest[m*i + j];
			}
		}
		cout << r1 - r2 << endl;		
	
	return 0;
}

