def checkDigs(num, sum):
    num = str(num)
    tmpSum = 0
    for i in range (0, len(num)):
        tmpSum += int(num[i])
    if int(tmpSum) == sum:
        return True
    else:
        return False


L = int(input())
D = int(input())
X = int(input())

for i in range (L, D + 1):
    if checkDigs(i, X):
        print(i)
        break

for i in range(D, L - 1, -1):
    if checkDigs(i, X):
        print(i)
        break