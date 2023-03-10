T = int(input())
for i in range(T):
    a = list(map(int, input().split(" ")))
    a.sort()
    print("Scenario #" + str(i + 1) + ":")
    if a[0] ** 2 + a[1] ** 2 == a[2] ** 2:
        print("yes")
    else:
        print("no")
    print()