cases = int(input())

i = 0
for i in range(1, cases):
    aString = input()
    bString = input()

    j = 0
    fin = ""
    for j in range(0, len(aString)):
        if aString[j] == bString[j]:
            fin += "."
        else:
            fin += "*"

    print(fin)