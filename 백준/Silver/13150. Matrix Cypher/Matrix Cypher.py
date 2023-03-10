import math

def reverseZero(matrix):
    a = matrix[0][0] - matrix[0][1]
    b = matrix[0][1]
    c = matrix[1][0] - matrix[1][1]
    d = matrix[1][1]
    return [[a, b], [c, d]]

def reverseOne(matrix):
    a = matrix[0][0]
    b = matrix[0][1] - matrix[0][0]
    c = matrix[1][0]
    d = matrix[1][1] - matrix[1][0]
    return [[a, b], [c, d]]

a, b = map(int, input().split())
c, d = map(int, input().split())
matrix = [[a, b], [c, d]]
result = ""
while(True):
    if matrix == [[1, 0], [0, 1]]: break
    if matrix[0][0] > matrix[0][1] or matrix[1][0] > matrix[1][0]:
        matrix = reverseZero(matrix)
        result = "0" + result
    else:
        matrix = reverseOne(matrix)
        result = "1" + result
print(result)