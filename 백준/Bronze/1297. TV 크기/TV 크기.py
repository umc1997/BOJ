import math
cross, height, width = map(int, input().split())

unit = height ** 2 + width ** 2
unit = math.sqrt(unit)
unit = cross / unit

print(int(unit * height))
print(int(unit * width))