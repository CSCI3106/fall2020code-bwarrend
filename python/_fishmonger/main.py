import sys

nm = input().split(' ')
n = int(nm[0])
m = int(nm[1])

fish = input().split(' ')
fish = [int(i) for i in fish] 
fish.sort()

buyers = []
for i in range(0, m):
    bl = input().split(' ')
    buyers.insert(len(buyers), [int(bl[1]), int(bl[0])])

buyers.sort()

sum = 0

while len(fish) > 0:
    while(True):
        if len(buyers) == 0:
            print(sum)
            exit(0)
        
        if(buyers[len(buyers)-1][1] == 0):
            buyers.pop()
        else:
            break
    
    sum += fish[len(fish) - 1] * buyers[len(buyers)-1][0]
    fish.pop()
    buyers[len(buyers) -1][1] -= 1


print(sum)