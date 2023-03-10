import math
n = input()
digit = [0] * 9 # 0 ~ 8
for c in n:
    if c == '6' or c == '9':
        digit[6] += 1
    else:
        digit[int(c)] += 1
digit[6] = math.ceil(digit[6] / 2)
print(max(digit))

