#include <iostream>

using namespace std;

int main()
{
	unsigned int A, B;
	cin >> A;
	cin >> B;
	int tmp = B;
	int B1 = tmp % 10; //324 , 4
	tmp -= B1; //320
	tmp /= 10; //32
	int B2 = tmp % 10; //32 2
	tmp -= B2; //30
	tmp /= 10; //3
	int B3 = tmp;

	cout << A * B1 << endl;
	cout << A * B2 << endl;
	cout << A * B3 << endl;
	cout << A * B << endl;
}