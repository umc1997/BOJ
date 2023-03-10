import math

def distance(x1, y1, x2, y2):
    return math.sqrt((x1-x2)**2 + (y1-y2)**2)

x, y = map(int, input().split())
peoples = []
for k in range(3):
    people = list(map(int, input().split()))
    peoples.append(people)
dists = []
for i in range(3):
    for j in range(3):
        if i == j: continue
        for k in range(3):
            if j == k or k == i: continue
            dist = distance(peoples[i][0], peoples[i][1], x, y) + \
                   distance(peoples[i][0], peoples[i][1], peoples[j][0], peoples[j][1]) +\
                   distance(peoples[j][0], peoples[j][1], peoples[k][0], peoples[k][1])
            dists.append(dist)
dists.sort()
print(math.floor(dists[0]))
