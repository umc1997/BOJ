s, n = input().split()
s = int(s)
entity = [[1, 1, 1, 0, 1, 1, 1], #0
          [0, 0, 1, 0, 0, 1, 0], #1
          [1, 0, 1, 1, 1, 0, 1], #2
          [1, 0, 1, 1, 0, 1, 1], #3
          [0, 1, 1, 1, 0, 1, 0], #4
          [1, 1, 0, 1, 0, 1, 1], #5
          [1, 1, 0, 1, 1, 1, 1], #6
          [1, 0, 1, 0, 0, 1, 0], #7
          [1, 1, 1, 1, 1, 1, 1], #8
          [1, 1, 1, 1, 0, 1, 1]] #9

output =""
for i in range(5):
    if (i == 0 or i == 2 or i == 4):
        for c in n:
            output += " "
            if(entity[int(c)][i // 2 * 3]):
                output += ("-" * s)
            else:
                output += (" " * s)
            output += "  "
        output += '\n'
    elif(i == 1):
        for j in range(s):
            for c in n:
                if (entity[int(c)][1]):
                    output += ("|")
                else:
                    output += (" ")
                output += " " * s
                if (entity[int(c)][2]):
                    output += ("|")
                else:
                    output += (" ")
                output += " "
            output += '\n'
    elif (i == 3):
        for j in range(s):
            for c in n:
                if (entity[int(c)][4]):
                    output += ("|")
                else:
                    output += (" ")
                output += " " * s
                if (entity[int(c)][5]):
                    output += ("|")
                else:
                    output += (" ")
                output += " "
            output += '\n'

print(output)
