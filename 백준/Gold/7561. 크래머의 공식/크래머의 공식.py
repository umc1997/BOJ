import copy

def det(list):
    tmp1 = list[0][0] * (list[1][1] * list[2][2] - list[1][2] * list[2][1])
    tmp2 = list[0][1] * (list[1][0] * list[2][2] - list[1][2] * list[2][0])
    tmp3 = list[0][2] * (list[1][0] * list[2][1] - list[1][1] * list[2][0])
    return tmp1 - tmp2 + tmp3

T = int(input())
for i in range(T):
    list1 = list(map(int, input().split()))
    list2 = list(map(int, input().split()))
    list3 = list(map(int, input().split()))
    A = [list1[0:3], list2[0:3], list3[0:3]]
    B = [list1[3], list2[3], list3[3]]
    A1 = copy.deepcopy(A)
    A2 = copy.deepcopy(A)
    A3 = copy.deepcopy(A)
    for i in range(3):
        A1[i][0] = B[i]
        A2[i][1] = B[i]
        A3[i][2] = B[i]
    print(det(A1), det(A2), det(A3) ,det(A))
    if (det(A) == 0):
        print("No unique solution")
    else:
        x1 = det(A1)/det(A)
        x2 = det(A2)/det(A)
        x3 = det(A3)/det(A)
        x = [x1 + 0, x2 + 0, x3 + 0]
        for xi in x:
            if xi > -0.0005 and xi < 0.0005:
                xi = 0
        print("Unique solution: {0:0.3f} {1:0.3f} {2:0.3f}".format(x[0] + 0, x[1] + 0, x[2] + 0))
    print()