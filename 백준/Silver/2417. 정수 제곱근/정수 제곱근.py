import math

n = int(input())
a = int(math.sqrt(n))
while a ** 2 < n:
    a += 1
print(a)