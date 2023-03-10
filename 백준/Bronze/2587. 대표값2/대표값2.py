array = []

sum = 0
for i in range(5):
    a = int(input())
    sum += a
    array.append(a)

array.sort()
print(sum // 5)
print(array[2])