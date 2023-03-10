import math

a,b,c,d = map(int, input().split())
S=a + b + c + d
a,b,c,d = map(int, input().split())
T=a + b + c+d
print(max(S,T))