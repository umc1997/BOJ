n = int(input())
T = []
P = []
DP = []
for i in range(n):
    a, b = map(int, input().split(" "))
    T.append(a)
    P.append(b)
    DP.append(b)
DP.append(0)
for i in range(n - 1, -1, -1):
    if i + T[i]> n:
        DP[i] = DP[i + 1]
        continue
    DP[i] = max(DP[i + T[i]] + P[i], DP[i + 1])
print(DP[0])