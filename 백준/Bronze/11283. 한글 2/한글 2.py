import re
BASE_CODE = 44032

char = input()
code = ord(char) - BASE_CODE + 1
print(code)