n = int(input())
k = int(input(), 2)
cnt = 0
while k != 0:
    k = k - (k & (~k + 1))
    cnt += 1
print(cnt)