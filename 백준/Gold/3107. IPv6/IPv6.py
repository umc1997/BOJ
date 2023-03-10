def invert(a):
    length = len(a)
    result = ""
    result += (4 - length) * '0'
    result += a
    return result

s = input()
oldlist = list(s.split("::"))
if(len(oldlist) == 1):
    newlist = list(s.split(":"))

else:
    list1 = oldlist[0].split(':')
    list2 = oldlist[1].split(':')
    tmp = 8 - len(list1) - len(list2)

    for i in range(tmp):
        list1.append('0')
    newlist = list1 + list2

result = ""
for i in range(len(newlist)):
    result += invert(newlist[i])
    if i != 7 :
        result +=":"

print(result)



