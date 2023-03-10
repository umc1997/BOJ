
while True:
    try:
        C, m, n, p = input().split()
        if C == "ZZ":
            break
        m = int(m)
        n = int(n)
        p = int(p)
        for i in range(p):
            s1, s2 = input().split()
            t1 = s1[1:]
            t2 = s2[1:]
            j = int(t1[0:t1.find('b')]) % m
            k = int(t1[t1.find('b') + 1:]) % n
            p = int(t2[0:t2.find('b')]) % m
            q = int(t2[t2.find('b') + 1:]) % n
            r = j
            if k % 2 == 1:
                r -= p
            else:
                r += p
            if r < 0:
                r += m
            r %= m
            s = (k + q) % n

            result = "ProblemID " + C + ": "
            result += s1 + " * " + s2 + " = " + "a" + str(r) + "b" + str(s)
            print(result)
    except(ValueError):
        break


