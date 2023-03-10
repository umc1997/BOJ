import math

T = int(input())
for i in range(T):
    m = int(input())
    lg = 1
    for j in range(1, m + 1):
        lg += math.log10(j)

    print(math.floor(lg))