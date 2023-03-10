#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	unsigned int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;
	if (A < 40)
		A = 40;
	if (B < 40)
		B = 40;
	if (C < 40)
		C = 40;
	if (D < 40)
		D = 40;
	if (E< 40)
		E = 40;
	cout << ((A + B + C + D + E) / 5) << "\n";
}