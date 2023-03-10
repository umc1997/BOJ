N = int(input())
answer = 0
MOD = 1000000007
for i in range(N + 1, 2 * N + 1):
    if i % 3 != 0:
        continue
    m = 2 * N - i   #1
    n = i - N       #5
    if m < 0 or n < 1:
        continue
    n -= 1

    tmp = 1
    for j in range(m + 1, m + n + 1):
        tmp *= j
    for j in range(1, n + 1):
        tmp //= j
    # (m+n)! / m! n!

    answer += tmp % MOD
answer %= MOD
print(answer)