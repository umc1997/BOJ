array = [[0]*100 for i in range(100)]
num = int(input())

for i in range(num):
    a, b = map(int, input().split(" "))
    for j in range(a, a + 10):
        for k in range(b, b + 10):
            array[j][k] = 1
sum = 0
for i in array:
    for j in i:
        sum += j

print(sum)
