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
	int check = 0;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		if (a == 0)
			check--;
		else
			check++;
	}
	if (check > 0)
	{
		cout << "Junhee is cute!" << "\n";	
	}
	else
	{
		cout << "Junhee is not cute!" << "\n";
	}
	return 0;
}
