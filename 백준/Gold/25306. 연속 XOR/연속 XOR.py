a, b = map(int, input().split())
list = []

if a % 2 == 1:
    list.append(a)
    a += 1
if b % 2 == 0:
    list.append(b)
    b -= 1
if a < b:
    tmp = (b - a + 1) // 2
    if tmp % 2 == 1:
        list.append(1)

result = 0
for k in list:
    result = result ^ k
print(result)