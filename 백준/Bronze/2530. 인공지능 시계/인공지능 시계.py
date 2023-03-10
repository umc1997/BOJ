import math
a, b, c= map(int, input().split())
d = int(input())
times = (a * 60 + b) * 60 + c
times += d
seconds = times % 60
times //= 60
minutes = times % 60
times //= 60
hours = times % 24

print("%d %d %d"%(hours,minutes,seconds))