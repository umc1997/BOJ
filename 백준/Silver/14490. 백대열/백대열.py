def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

a, b = map(int, input().split(":"))
#a / b + c / d
# ad + cb/ bd
g = gcd(a, b)
print(str(a//g) + ":" + str(b//g))