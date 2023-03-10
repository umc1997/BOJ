#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << setprecision(11);
	long double A, B;
	cin >> A >> B;
	long double result = A / B;
	cout << result << endl;
}