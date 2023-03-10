import sys
input = sys.stdin.readline
X, Y = map(int, input().rstrip().split(" "))
Z = Y * 100 // X
if Z >= 99:
    print(-1)
else:
    left = 1
    right = X + 1
    while left <= right:
        mid = (left + right) // 2
        newZ = (Y + mid) * 100 // (X + mid)
        if newZ - Z >= 1:
            right = mid - 1
        elif newZ - Z == 0:
            left = mid + 1
    print(left)
