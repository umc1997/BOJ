fibo = [0, 1]
N = int(input())
for i in range(N - 1):
    fibo.append(fibo[-1] + fibo[-2])
print(fibo[N])