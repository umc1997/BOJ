A = int(input())
X = int(input())
MOD = 1000000007
A %= MOD
answer = 1
while X != 0:
    if X % 2 == 1:
        answer *= A
        answer %= MOD
    X //= 2
    A *= A
    A %= MOD
print(answer)