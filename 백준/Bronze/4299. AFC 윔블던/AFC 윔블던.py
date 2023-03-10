import math
a, b= map(int, input().split())
if(a + b)% 2 == 1:
    print(-1)
elif (a<b):
    print(-1)
else:
    c = (a + b)/2
    d = a - c
    print(int(max(c,d)),int(min(c,d)),sep=" ")
