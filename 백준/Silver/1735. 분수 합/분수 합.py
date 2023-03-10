def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

a, b = map(int, input().split())
c, d = map(int, input().split())
u = a * d + c * b
d = b * d
g = gcd(u, d)
u //= g
d //= g
print(u, d)