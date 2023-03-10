def next_permuntation(arr):
    i, j = len(arr) - 1, len(arr) - 1

    while i > 0 and arr[i-1] >= arr[i]:
        i-=1
    if i == 0:
        return False
    while arr[i-1] >= arr[j]:
        j-=1
    arr[i-1], arr[j] = arr[j], arr[i-1]

    k = len(arr) - 1
    while i<k :
        arr[i],arr[k] = arr[k], arr[i]
        i+=1
        k-=1
    return arr
outputLights = [
    ["000000","001100","010010","010010","010010","001100","000000"], #0
    ["000000","000100","001100","000100","000100","000100","000000"], #1
    ["000000","011110","000010","011110","010000","011110","000000"], #2
    ["000000","011100","000010","000100","000010","011100","000000"], #3
    ["000000","000100","001100","010100","111110","000100","000000"], #4
    ["000000","011110","010000","011100","000010","010010","001100"], #5
    ["000000","010000","010000","011110","010010","011110","000000"], #6
    ["000000","011110","000010","000100","000100","000100","000000"], #7
    ["000000","011110","010010","011110","010010","011110","000000"], #8
    ["011110","010010","010010","011110","000010","000010","000010"]  #9
]
inputLights = []
list = []
length = 0
for i in range(7):
    a = input()
    length = len(a)
    inputLights.append(a)

for i in range(length // 6):
    startY = i * 6
    if(inputLights[0][startY + 1] == "1"):
        list.append(9)
    elif(inputLights[6][startY + 2] == "1"):
        list.append(5)
    elif(inputLights[4][startY] == "1"):
        list.append(4)
    elif(inputLights[1][startY + 1] == "0"):
        if (inputLights[2][startY + 1] == "1"):
            list.append(0)
        else:
            list.append(1)
    else:
        if(inputLights[1][startY + 4] == "1"):
            if(inputLights[2][startY + 1] == "1"):
                list.append(8)
            else:
                if(inputLights[3][startY + 1] == "1"):
                    list.append(2)
                else:
                    list.append(7)
        else:
            if(inputLights[1][startY + 2] == "1"):
                list.append(3)
            else:
                list.append(6)

output = ""
list = next_permuntation(list)
if(list == False):
    output = "The End"
else:
    for i in range(7):
        for number in list:
            output += outputLights[number][i]
        output+='\n'

print(output)