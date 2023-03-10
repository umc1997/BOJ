#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string a;
    cin >> a;
    long long result = 0;
    int s = a.size();
    stack<char> st;
    int sum = 1;
    for (int i = 0; i < s; i++)
    {
        char current = a[i];
        if (current == '(') 
        {
            st.push(current);
            sum *= 2;
        }
        else if (current == '[')
        {
            st.push(current);
            sum *= 3;
        }
        else if (current == ')')
        {
            if (st.empty())
            {
                result = 0;
                break;
            }
            else
            {
                char top = st.top();
                if (top != '(')
                {
                    result = 0;
                    break;
                }
                if(a[i - 1] == '(')
                    result += sum;
                sum /= 2;
                st.pop();
            }
        }
        else if (current == ']')
        {
            if (st.empty())
            {
                result = 0;
                break;
            }
            else
            {
                char top = st.top();
                if (top != '[')
                {
                    result = 0;
                    break;
                }
                if(a[i-1] == '[')
                    result += sum;
                sum /= 3;
                st.pop();
            }
        }
    }
    if (!st.empty())
        result = 0;
    cout << result << '\n';
    return 0;

}