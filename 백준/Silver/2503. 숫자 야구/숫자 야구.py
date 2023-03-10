import sys
input = sys.stdin.readline
raw = range(123, 988)
candidate = []
def digits(integer):
    return integer // 100, integer % 100 // 10, integer % 10
def baseball(H1, T1, O1, H2, T2, O2):
    S = (H1 == H2) + (T1 == T2) + (O1 == O2)
    B = (H1 == T2 or H1 == O2) + (T1 == H2 or T1 == O2) + (O1 == H2 or O1 == T2)
    return S, B
for i in raw:
    H, T, O = digits(i)
    if H != T and H != O and O != T and H != 0 and O != 0 and T != 0:
        candidate.append(i)
N = int(input().rstrip())
for i in range(N):
    C, S, B = map(int, input().rstrip().split(" "))
    H, T, O = digits(C)
    tmp = []
    for check in candidate:
        HH, TT, OO = digits(check)
        SS, BB = baseball(H, T, O, HH, TT, OO)
        if SS == S and BB == B:
            tmp.append(check)
    candidate = tmp
print(len(candidate))