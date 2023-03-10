C, K, P = map(int, input().split(" "))
print(K * (C + 1) * C // 2 + P * (2 * C + 1) * (C + 1) * C // 6)