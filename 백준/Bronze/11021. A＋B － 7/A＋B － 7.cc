#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	unsigned int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		unsigned int A, B;
		cin >> A >> B;
		cout << "Case #" << i << ": " << A + B << "\n";
	}
}