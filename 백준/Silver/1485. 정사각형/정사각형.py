import math

def distanceSquare(x1, y1, x2, y2):
    return (x1-x2)**2 + (y1-y2)**2

T = int(input())
for i in range(T):
    dots = []
    isSqaure = True
    for k in range(4):
        dot = list(map(int, input().split()))
        dots.append(dot)
    for j in range(4):
        dist = []
        for k in range(4):
            if k == j: continue
            dist.append((distanceSquare(dots[j][0], dots[j][1], dots[k][0], dots[k][1])))
            dist.sort()
        if (dist[0] == dist[1]) and (dist[0] + dist[1] == dist[2]): continue
        else:
            isSqaure = False
            break
    if isSqaure:
        print("1")
    else:
        print("0")
