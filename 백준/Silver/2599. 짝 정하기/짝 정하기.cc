#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	int Am, Aw, Bm, Bw, Cm, Cw;
	cin >> Am >> Aw >> Bm >> Bw >> Cm >> Cw;
	int check = -1;
	bool isFind = false;
	int a2, a3, b1, b3, c1, c2;
	while (check <= Am)
	{
		check++;
		a3 = Am - check;
		if (a3 < 0)
			continue;
		b3 = Cw - a3;
		if (b3 < 0)
			continue;
		b1 = Bm - b3;
		if (b1 < 0)
			continue;
		c1 = Aw - b1;
		if (c1 < 0)
			continue;
		c2 = Cm - c1;
		if (c2 < 0)
			continue;
		a2 = Bw - c2;
		if (a2 < 0)
			continue;
		if (check != a2)
			continue;
		isFind = true;
		break;
	}
	if (isFind)
	{
		cout << 1 << "\n";
		cout << a2 << " " << a3 << "\n";
		cout << b1 << " " << b3 << "\n";
		cout << c1 << " " << c2 << "\n";
	}
	else
		cout << 0 << "\n";
	
	return 0;	
}
