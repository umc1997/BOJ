
def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b, a%b)

n = int(input())
while(n != -1):
    sum = 1
    res = str(n) + " = 1"
    for i in range(2, n):
        if(gcd(n, i) == i):
            sum += i
            res += " + " + str(i)
    if(sum == n):
        print(res)
    else:
        print(n, "is NOT perfect.")
    n=int(input())