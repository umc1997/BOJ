s = input()
if s.find('x') != -1:
    result = ""
    a, b = s.split('x')
    tmp = int(a) // 2
    if tmp == -1: result += '-'
    elif tmp != 1: result += str(tmp)
    result += "xx"
    if b == "+1": result += "+x+W"
    elif b == "-1": result += "-x+W"
    elif b == '': result += "+W"
    else: result += (b + "x+W")

    print(result)
else:
    if s == '1': print("x+W")
    elif s == '-1': print("-x+W")
    elif s == '0': print("W")
    else: print(s + "x+W")
