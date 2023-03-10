import math


T = int(input())
list = map(int, input().split())
L = int(input())
list = sorted(list)
ptr = 0;
for i in list:
    if(i<L):
        ptr+=1
    else:
        break
res = 0
if L in list:
    res = 0
elif (ptr == 0):
    res = L * (list[0] - L) - 1
else:
    res = (L - list[ptr - 1]) * (list[ptr] - L) - 1
print(res)