import math
while True:
    G, T, A, D = map(int, input().split(" "))
    if G == -1 and A == -1 and T == -1 and D == -1:
        break
    old = G * A + D
    new = 2 ** math.ceil(math.log2(old))
    X = T * (T - 1) // 2 * G + new - 1
    Y = new - old
    print("{0}*{1}/{2}+{3}={4}+{5}".format(G,A,T,D,X,Y))