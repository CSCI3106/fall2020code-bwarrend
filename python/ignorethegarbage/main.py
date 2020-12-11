import sys

def isValid(n):
    nS = str(n)
    valid = True
    for i in range(0,len(nS)):
        if nS[i] == str(3) or nS[i] == str(4) or nS[i] == str(7):
            valid = False
    return valid

def upsideDown(n):
    nS = str(n)
    newString = ""
    for i in range(0, len(nS)):
        if nS[i] == str(6):
            newString += str(9)
        elif nS[i] == str(9):
            newString += str(6)
        else:
            newString += nS[i]
    # nS.replace("6","-")
    # nS.replace("9", "6")
    # nS.replace("-","9")
    
    return nS[::-1]


validMemo = [" "] * 10000000



for inp in sys.stdin:
    count = 0
    inp = int(inp)
    i = 1

    while i <= inp:
        count += 1

        if validMemo[count] == " ":
            validMemo[count] = isValid(count)

        if not validMemo[count]:
        # if not isValid(count):
            i -= 1
        i += 1

    print(upsideDown(count))