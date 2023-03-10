import math
def distance(x1, y1, z1, x2, y2, z2):
    return round(math.sqrt((x1-x2)**2 + (y1-y2)**2 + (z1-z2)**2 ),11)

Ax, Ay, Az, Bx, By, Bz, Cx, Cy, Cz = map(int, input().split())

d1 = distance(Ax,Ay,Az,Cx,Cy,Cz)
d2 = distance(Bx,By,Bz,Cx,Cy,Cz)
u = [Ax - Bx, Ay - By, Az - Bz]
t = -(u[0] * (Ax - Cx) + u[1] * (Ay - Cy) + u[2] * (Az - Cz)) / (u[0] ** 2 + u[1] ** 2 + u[2] ** 2)
Hx = t * u[0] + Ax
Hy = t * u[1] + Ay
Hz = t * u[2] + Az
d3 = distance(Hx, Hy, Hz, Cx, Cy, Cz)

if(Hx >= Ax and Hx <= Bx) or (Hx <= Ax and Hx >= Bx):
    print(min(d1, d2, d3))
else:
    print(min(d1, d2))