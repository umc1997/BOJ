#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int ggcd(int a, int b)
{
    if (b == 0)return a;
    else return ggcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int lcm, gcd = 0;
    cin >> gcd >> lcm;
    int k = lcm / gcd;
    int a, b;
    for (int i = sqrt(k); i >= 1; i--)
    {
        if (k % i == 0)
        {
            if (ggcd(k/i, i) == 1)
            {
                a = k / i;
                b = i;
                break;
            }
        }
    }
    cout << min(a, b) * gcd << " " << max(a, b) * gcd << '\n';
    
    return 0;

}