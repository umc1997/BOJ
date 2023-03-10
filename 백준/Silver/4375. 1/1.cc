#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n = 1;
    while (cin >> n) {
        int result = 1;
        long long m = 1;
        while (m % n != 0) {
            m %= n;
            m *= 10;
            m++;
            result++;
        }
        cout << result << '\n';
    }
    return 0;

}