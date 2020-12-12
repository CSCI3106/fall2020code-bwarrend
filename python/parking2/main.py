cases = int(input())

for i in range(0, cases):
    storesNum = int(input())
    stores = [0] * storesNum
    stores = input().split(" ")

    for j in range(0, storesNum):
        stores[j] = int(stores[j])

    stores.sort()
    travelled = 0
    
    for j in range(len(stores) - 1, -1, -1):
        if j == 0:
            travelled += stores[len(stores)-1] - stores[j]
        else:
            travelled += stores[j] - stores[j-1]    
    
    print(travelled) 