#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int arr[60][60];
int newArr[60][60];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int R, C, T;
    cin >> R >> C >> T;
    int cleaner = 0;
    int result = 2;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == -1 && cleaner == 0)
            {
                cleaner = i;
            }
        }
    }
    for (int t = 0; t < T; t++)
    {
        // 1. 확산
        memset(newArr, 0, 3600 * sizeof(int));
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                if (arr[i][j] != 0 && arr[i][j] != -1)
                {
                    int currentData = arr[i][j];
                    for (int k = 0; k < 4; k++)
                    {
                        int newX = dx[k] + i;
                        int newY = dy[k] + j;
                        if (newX >= 0 && newX < R && newY >= 0 && newY < C)
                        {
                            if (cleaner == newX && newY == 0) continue;
                            if (cleaner + 1 == newX && newY == 0)continue;
                            newArr[newX][newY] += currentData / 5;
                            arr[i][j] -= currentData / 5;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                arr[i][j] += newArr[i][j];
            }
        }
        // 2. 청정기
        int xi = cleaner - 1;
        int yi = 0;
        arr[xi][yi] = 0;
        while (true)
        {
            int newXi = xi;
            int newYi = yi;
            if (xi == 0 && yi == 0) newYi++;
            else if (xi == 0 && yi == C - 1) newXi++;
            else if (xi == cleaner && yi == 0) break;
            else if (xi == cleaner && yi == C - 1) newYi--;
            else {
                if (xi == 0) newYi++;
                else if (xi == cleaner) newYi--;
                else if (yi == 0) newXi--;
                else if (yi == C - 1) newXi++;
            }
            arr[xi][yi] = arr[newXi][newYi];
            xi = newXi;
            yi = newYi;
        }
        arr[cleaner][1] = 0;



        xi = cleaner + 2;
        yi = 0;
        arr[xi][yi] = 0;
        while (true)
        {
            int newXi = xi;
            int newYi = yi;
            if (xi == cleaner + 1 && yi == 0) break;
            else if (xi == cleaner + 1 && yi == C - 1) newYi--;
            else if (xi == R - 1 && yi == 0) newYi++;
            else if (xi == R - 1 && yi == C - 1) newXi--;
            else {
                if (xi == cleaner + 1) newYi--;
                else if (xi == R - 1) newYi++;
                else if (yi == 0) newXi++;
                else if (yi == C - 1) newXi--;
            }
            arr[xi][yi] = arr[newXi][newYi];
            xi = newXi;
            yi = newYi;
        }
        arr[cleaner + 1][1] = 0;
    }

    
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            result += arr[i][j];
        }
    }
    cout << result << '\n';
    
    return 0;

}