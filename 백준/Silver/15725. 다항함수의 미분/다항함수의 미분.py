s = input()
if s.find('x') != -1:
    a, b = s.split('x')
    if a == '' : print('1')
    elif a == '-' : print("-1")
    else : print(a)
else:
    print('0')
