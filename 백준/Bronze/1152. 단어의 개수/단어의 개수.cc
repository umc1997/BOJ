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
	
	string in;
	cin >> in;
	int cnt = 0;
	while (!cin.eof())
	{
		cin >> in;
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
