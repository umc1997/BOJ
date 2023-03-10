import math
def distance(x1, y1, x2, y2):
    return round(math.sqrt((x1-x2)**2 + (y1-y2)**2),11)

N = int(input())
for i in range(N):
    x1, y1, x2, y2, x3, y3, x4, y4 = map(int, input().split())
    if x2 - x1 == 0 and x4 - x3 == 0:
        if(x1 == x3):
            print("LINE")
        else:
            print("NONE")
    elif x2 - x1 == 0:
        m2 = (y4 - y3) / (x4 - x3)
        c2 = y3 - m2 * x3
        sy = m2 * x1 + c2
        print("POINT %0.2f %0.2f" % (x1, sy))
    elif x4 - x3 == 0:
        m1 = (y2 - y1) / (x2 - x1)
        c1 = y1 - m1 * x1
        sy = m1 * x3 + c1
        print("POINT %0.2f %0.2f" % (x3, sy))
    else:
        m1 = (y2 - y1) / (x2 - x1)
        m2 = (y4 - y3) / (x4 - x3)
        c1 = y1 - m1 * x1
        c2 = y3 - m2 * x3
        # y = m1x + c1  , y = m2x + c2
        if(m1 == m2):
            if(c1 == c2):
                print("LINE")
            else:
                print("NONE")
        else:
            sx = round((c2 - c1) / (m1 - m2), 3)
            sy = round(m1 * sx + c1, 3)
            print("POINT %0.2f %0.2f"%(sx,sy))
