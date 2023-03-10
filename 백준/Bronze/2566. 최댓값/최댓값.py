inp = []

for i in range(9):
    a = list(map(int, input().split(" ")))
    inp.append(a)
maximum = -1
row = 0
col = 0

for i, a in enumerate(inp):
    for j, b in enumerate(a):
        if b > maximum:
            maximum = b
            row = i + 1
            col = j + 1
print(maximum)
print(row, col)