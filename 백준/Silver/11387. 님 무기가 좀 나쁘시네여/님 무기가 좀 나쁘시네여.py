def power(a):
    return a[0] * (100 + a[1]) * (100 *(100 - min(a[2], 100)) + min(a[2], 100) * a[3]) * (100 + a[4])


input1 = list(map(int, input().split()))
input2 = list(map(int, input().split()))
input3 = list(map(int, input().split()))
input4 = list(map(int, input().split()))

beforeA = power(input1)
tmp = [input1[i] - input3[i] + input4[i] for i in range(len(input1))]
afterA = power(tmp)

beforeB = power(input2)
tmp = [input2[i] - input4[i] + input3[i] for i in range(len(input1))]
afterB = power(tmp)

if (beforeA > afterA):
    print('-')
elif (beforeA < afterA):
    print('+')
elif (beforeA == afterA):
    print('0')

if (beforeB > afterB):
    print('-')
elif (beforeB < afterB):
    print('+')
elif (beforeB == afterB):
    print('0')

