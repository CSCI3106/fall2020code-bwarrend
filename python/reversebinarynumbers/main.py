num = int(input())

num2 = num;

i = 0
numInBinary = []
while int(num) > 0:
    numInBinary.append(int(num) % 2)
    num /= 2
    i += 1

num2D = ""
for e in numInBinary:
    num2D.append(e)



print(num2D)