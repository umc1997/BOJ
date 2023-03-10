#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	int a = N % 8;
	int result;
	switch (a)
	{
	case(1):
		result = 1;
		break;
	case(2):
	case(0):
		result = 2;
		break;
	case(3):
	case(7):
		result = 3;
		break;
	case(4):
	case(6):
		result = 4;
		break;
	case(5):
		result = 5;
	}
	cout << result << "\n";
	return 0;	
}
