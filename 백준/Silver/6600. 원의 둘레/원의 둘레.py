import math
def distance(x1, y1, x2, y2):
    return round(math.sqrt((x1-x2)**2 + (y1-y2)**2),11)
while(True):
    try:
        line = input()
        x1, y1, x2, y2, x3, y3 = map(float, line.split())
        d1 = distance(x1, y1, x3, y3)
        d2 = distance(x1, y1, x2, y2)
        d3 = distance(x2, y2, x3, y3)
        s = (d1 + d2 + d3) / 2
        S = math.sqrt(s * (s - d1) * (s - d2) * (s - d3))
        R = d1 * d2 * d3 / 4 / S
        D = round(2 * R * 3.141592653589793, 2)
        print("%0.2f"%D)
    except EOFError:
        break