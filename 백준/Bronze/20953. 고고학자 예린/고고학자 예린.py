import sys
input = sys.stdin.readline
print = sys.stdout.write
T = int(input().rstrip())
for i in range(T):
    a, b = map(int, input().rstrip().split(" "))
    n = a + b
    print("%d\n"%(n * n * (n - 1) // 2))