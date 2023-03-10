import sys
input = sys.stdin.readline
numRow = [-1] * 26
numCol = [-1] * 26
checkRow = [0] * 5
checkCol = [0] * 5
checkCross = [0] * 2
bingo = 0
answer = 0
for i in range(5):
    a = list(map(int, input().rstrip().split(" ")))
    for j in range(5):
        numRow[a[j]] = i
        numCol[a[j]] = j
for i in range(5):
    a = list(map(int, input().rstrip().split(" ")))
    if bingo >= 3:
        continue
    for j in range(5):
        checkRow[numRow[a[j]]] += 1
        checkCol[numCol[a[j]]] += 1
        if numRow[a[j]] == numCol[a[j]]:
            checkCross[0] += 1
        if numRow[a[j]] + numCol[a[j]] == 4:
            checkCross[1] += 1
        #checking
        if checkRow[numRow[a[j]]] == 5:
            bingo += 1
        if checkCol[numCol[a[j]]] == 5:
            bingo += 1
        if checkCross[0] == 5:
            checkCross[0] = 0
            bingo += 1
        if checkCross[1] == 5:
            checkCross[1] = 0
            bingo += 1
        if bingo >= 3:
            answer = i * 5 + j + 1
            break
print(answer)