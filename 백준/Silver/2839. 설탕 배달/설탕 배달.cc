#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt=0;
    int result=-1;
    cin>>n;
    cnt = n / 5;
    for(int i=cnt;i>=0;i--)
    {
        int a = n - (i*5);
        if(a%3==0)
        {
            result=i+a/3;
            break;
        }
    }
    printf("%d",result);
    return 0;
}