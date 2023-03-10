import math

def nCr(n, r):
    if r == 0 :
        return 1
    elif r == n:
        return 1
    return math.factorial(n) // math.factorial(r) // math.factorial(n - r)

T = int(input())
for i in range(T):
    N,M = map(int, input().split())
    print(int(nCr(M,N)))