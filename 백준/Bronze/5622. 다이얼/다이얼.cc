#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_map>

using namespace std;

int time(int i)
{
	if (i == 0)
		i += 10;
	return i + 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unordered_map<char, int> dial;
	dial = {
		{'A',2},{'B',2},{'C',2},
		{'D',3},{'E',3},{'F',3},
		{'G',4},{'H',4},{'I',4},
		{'J',5},{'K',5},{'L',5},
		{'M',6},{'N',6},{'O',6},
		{'P',7},{'Q',7},{'R',7},{'S',7},
		{'T',8},{'U',8},{'V',8},
		{'W',9},{'X',9},{'Y',9},{'Z',9}
	};
	string in;
	cin >> in;
	int t = 0;
	for (int i = 0; i < in.size(); i++)
	{
		t += time(dial.at(in[i]));
	}
	cout << t << "\n";
	return 0;
}
