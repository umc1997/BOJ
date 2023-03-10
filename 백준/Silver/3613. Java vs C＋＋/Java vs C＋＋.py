def isJavaFormat(a):
    if (a.find('_') != -1):
        return False
    if (a[0] < 'a' or a[0] > 'z'):
        return False
    return True
def isCFormat(a):
    for char in a:
        if(char == '_'):
            continue
        elif (char < 'a' or char >'z'):
            return False
    if (a[-1] == '_' or a[0] == '_'):
        return False
    if a.find('__') != -1:
        return False
    return True

def C2Java(a):
    result = ""
    isCap = False
    for char in a:
        if(char == '_'):
            isCap = True
        elif (isCap):
            result += char.capitalize()
            isCap = False
        else:
            result += char
    return result
def Java2C(a):
    result = ""
    for char in a:
        if(char >= 'A' and char <= 'Z'):
            result += '_'
            result += char.lower()
        else:
            result += char
    return result

s = input()
isJava = isJavaFormat(s)
isC = isCFormat(s)

if(isJava and isC):
    print(s)
elif (not isJava and isC):
    print(C2Java(s))
elif (isJava and not isC):
    print(Java2C(s))
else:
    print("Error!")