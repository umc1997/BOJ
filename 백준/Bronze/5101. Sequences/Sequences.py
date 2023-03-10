import math
while(1):
    a, b, c = map(int, input().split())
    if (a == 0) & (b == 0) & (c == 0):
        break;
    if (a < c) & (b < 0):
        print("X")
    elif (a > c) & (b > 0):
        print("X")
    elif (c - a) % b == 0:
        print((c-a)//b+1)
    else:
        print("X")