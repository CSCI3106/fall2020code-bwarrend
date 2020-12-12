itera = 1

while itera != -1:
    itera = int(input(""))
    total = 0
    lastB = 0
    if itera == -1:
        exit()
    for i in range(0,itera):
        a,b = input().split(" ")
        a = int(a)
        b = int(b)
        total = total + a * (b-lastB)
        lastB = b
    print(total," miles")