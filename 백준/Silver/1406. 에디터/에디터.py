import sys
input = sys.stdin.readline
first_cur = list(input().rstrip())
second_cur = []
m = int(input())
for i in range(m):
    cmd = input()
    if cmd[0] == 'L':
        if len(first_cur) == 0:
            continue
        shift = first_cur.pop()
        second_cur.append(shift)
    elif cmd[0] == 'D':
        if len(second_cur) == 0:
            continue
        shift = second_cur.pop()
        first_cur.append(shift)
    elif cmd[0] == 'B':
        if len(first_cur) == 0:
            continue
        first_cur.pop()
    elif cmd[0] == 'P':
        char = cmd[2]
        first_cur.append(char)
print(''.join(first_cur) + ''.join(reversed(second_cur)))