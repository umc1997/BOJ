import math

def distanceSquare(x1, y1, x2, y2):
    return (x1-x2)**2 + (y1-y2)**2

x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
x3, y3 = map(int, input().split())

if x1 == x2 and x2 == x3:
    print("X")
elif x1 != x2 and x2 != x3 and ((y1 - y2) / (x1 - x2)) == ((y2 - y3) / (x2 - x3)):
    print("X")
else:
    d1 = distanceSquare(x1, y1, x2, y2)
    d2 = distanceSquare(x2, y2, x3, y3)
    d3 = distanceSquare(x3, y3, x1, y1)
    if d1 == d2 and d2 == d3:
        print("JungTriangle")
    elif d1 == d2 or d2 == d3 or d3 == d1:
        if d1 == d2:
            a = d1
            b = d3
        elif d2 == d3:
            a = d2
            b = d1
        elif d3 == d1:
            a = d1
            b = d2
        tmp = a * 2
        if tmp == b:
            print("Jikkak2Triangle")
        elif tmp > b:
            print("Yeahkak2Triangle")
        else:
            print("Dunkak2Triangle")
    else:
        L = [d1, d2, d3]
        L.sort()
        tmp = L[0] + L[1]
        if tmp == L[2]:
            print("JikkakTriangle")
        elif tmp > L[2]:
            print("YeahkakTriangle")
        else:
            print("DunkakTriangle")



