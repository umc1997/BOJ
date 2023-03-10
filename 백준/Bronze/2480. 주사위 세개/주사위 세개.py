a, b, c= map(int, input().split())
res=0

if a==b==c:
    res = a * 1000 + 10000
elif a==b:
    res = a * 100 + 1000
elif b==c:
    res = b * 100 + 1000
elif a==c:
    res = c * 100 + 1000
else:
    res = max([a,b,c]) * 100
print(res)