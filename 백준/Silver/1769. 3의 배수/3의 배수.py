n = input()
cnt = 0
s = 'YES'
while(len(n) > 1):
    sum = 0
    for i in n:
        sum += int(i)
    cnt += 1
    n = str(sum)
if(int(n) % 3 != 0):
    s = 'NO'
print(cnt)
print(s)
