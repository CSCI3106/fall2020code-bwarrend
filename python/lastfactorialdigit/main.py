def fact(n):
    total = 1
    
    for i in range(1, n):
        total = total * n
        n=n-1
    return total

nums = int(input(""))

for i in range(1, nums +1):
    curr = int(input(""))
    product =str(fact(curr))
    product = product[len(product)-1]

    print(product)