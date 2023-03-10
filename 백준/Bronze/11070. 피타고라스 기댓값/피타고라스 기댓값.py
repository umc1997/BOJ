T = int(input())
for i in range(T):
    n, m = map(int, input().split(" "))
    teamS = [0] * n
    teamA = [0] * n
    for j in range(m):
        a, b, p, q = map(int, input().split(" "))
        teamS[a - 1] += p
        teamS[b - 1] += q
        teamA[a - 1] += q
        teamA[b - 1] += p
    pytha = []
    for j in range(n):
        if teamS[j] == 0 and teamA[j] == 0:
            W = 0
        else:
            W = teamS[j] ** 2 / (teamS[j] ** 2 + teamA[j] ** 2)
        pytha.append(int(W * 1000))
    pytha.sort()
    print(pytha[n - 1])
    print(pytha[0])