import math
L = int(input())
A = int(input())
B = int(input())
C = int(input())
D = int(input())
p = math.ceil(A / C)
q = math.ceil(B / D)
print(L - max(p, q))