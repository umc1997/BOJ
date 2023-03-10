prime = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103]
special = []
for i in range(len(prime) - 1):
    special.append(prime[i] * prime[i + 1])
a = int(input())
for i in range(len(special)):
    if special[i] > a:
        print(special[i])
        break