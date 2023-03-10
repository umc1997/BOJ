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
	unsigned int T;
	cin >> T;
    int fibo[50][2] = { 0, };
    fibo[0][0] = 1;
    fibo[0][1] = 0;
    fibo[1][0] = 0;
    fibo[1][1] = 1;
    for (int i = 2; i < 50; i++)
    {
        fibo[i][0] = fibo[i - 1][0] + fibo[i - 2][0];
        fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1];
    }
    for (int i = 0; i < T; i++)
    {
        int tmp;
        cin >> tmp;
        cout << fibo[tmp][0] << " " << fibo[tmp][1] << "\n";
       
    }
}