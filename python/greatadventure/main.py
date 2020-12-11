journeys = int(input())

for i in range(0, journeys):
    journey = input()

    canComplete = True
    items = 0
    backpack = []
    for j in journey:
        #Don't want to pop an empty backpack
        if len(backpack) == 0:
            backpack.append('.')

        lastItem = backpack.pop()
        # print("j = ", j , "      lastItem = ", lastItem)

        if j == 't':
            if lastItem != '|':
                canComplete = False
                # print("TRADER FALSE")
                break
            else:
                # backpack.pop()
                continue
        elif j == 'j':
            if lastItem != '*':
                canComplete = False
                # print("JEWELER FALSE")
                break
            else:
                # backpack.pop()
                continue
        elif j == 'b':
            if lastItem != '$':
                canComplete = False
                # print("BANKER FALSE")
                break
            else:
                # backpack.pop()
                continue
        
        
        backpack.append(lastItem)
        if j != '.':
            backpack.append(j)
        
    if canComplete and len(backpack) <= 1:
        if len(backpack) == 1:
            if(backpack[0] == '.'):
                print("YES")
            else:
                print("NO")
        else:
            print("YES")
    else:
        print("NO")